import faiss
import numpy as np
import requests
import tensorflow as tf
from tensorflow.keras.preprocessing.sequence import pad_sequences
from transformers import BertTokenizer, TFBertModel
import torch

# Define API URLs and headers
GROQ_API_KEY = "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"
GROQ_API_URL = "https://api.groq.com/openai/v1/chat/completions"
MONSTER_API_URL = "https://api.mlsakiit.com/monsters"
SURVIVORS_API_URL = "https://api.mlsakiit.com/survivors"
RESOURCES_API_URL = "https://api.mlsakiit.com/resources"
HEADERS = {
    "Authorization": f"Bearer {GROQ_API_KEY}",
    "Content-Type": "application/json"
}

# Load a BERT model and tokenizer for embedding using TensorFlow
tokenizer = BertTokenizer.from_pretrained("bert-base-uncased")
model = TFBertModel.from_pretrained("bert-base-uncased")

# Function to fetch monster data from API
def fetch_monster_data():
    try:
        response = requests.get(MONSTER_API_URL, headers={"accept": "application/json"})
        response.raise_for_status()
        return response.json().get("monsters", [])
    except requests.exceptions.RequestException as e:
        print(f"Error fetching monster data: {e}")
        return [{"monster_id": "unknown", "lat": 0, "lon": 0}]  # Default fallback

# Function to fetch resource data from API
def fetch_resource_data():
    try:
        response = requests.get(RESOURCES_API_URL, headers={"accept": "application/json"})
        response.raise_for_status()
        return response.json().get("features", [])
    except requests.exceptions.RequestException as e:
        print(f"Error fetching resource data: {e}")
        return []

# Function to fetch survivor data from API
def fetch_survivor_data():
    try:
        response = requests.get(SURVIVORS_API_URL, headers={"accept": "application/json"})
        response.raise_for_status()
        return response.json()
    except requests.exceptions.RequestException as e:
        print(f"Error fetching survivor data: {e}")
        return []

# Function to format monster data into readable context
def format_monster_data(monsters):
    return [f"Monster {monster['monster_id']} at ({monster['lat']}, {monster['lon']})" for monster in monsters]

# Function to format survivor data into readable context
def format_survivor_data(survivors):
    return [f"Survivor {survivor['survivor_id']} in {survivor['district']} ({survivor['lat']}, {survivor['lon']})" for survivor in survivors]

# Function to format resource data into readable context
def format_resource_data(resources):
    return [
        f"{props.get('dist_name', 'Unknown')}: Temp {props.get('temp', 'N/A')}°C, Food {props.get('food_rations', 'N/A')}kg"
        for resource in resources if (props := resource.get("properties"))
    ]

# Function to get BERT embeddings for a list of texts using TensorFlow
def get_embeddings(texts):
    inputs = tokenizer(texts, padding=True, truncation=True, return_tensors="tf", max_length=512)
    outputs = model(**inputs)
    embeddings = outputs.last_hidden_state.numpy()  # Use the last hidden state
    return np.mean(embeddings, axis=1)  # Mean pooling of token embeddings

# Function to generate a response using Groq API
def generate_response(query, context):
    messages = [{"role": "user", "content": query}]
    for doc in context:
        messages.append({"role": "system", "content": doc})

    try:
        response = requests.post(GROQ_API_URL, json={
            "model": "llama3-8b-8192",  # Example model ID
            "messages": messages
        }, headers=HEADERS)

        response_data = response.json()
        if "choices" not in response_data:
            raise ValueError(f"Unexpected response format: {response_data}")
        
        return response_data["choices"][0]["message"]["content"]
    except Exception as e:
        return f"Error generating response: {e}"

# Function to perform similarity search using FAISS
def search_relevant_context(query, context):
    # Get embeddings for the context and the query
    context_embeddings = get_embeddings(context)
    query_embedding = get_embeddings([query])

    # Create FAISS index
    index = faiss.IndexFlatL2(context_embeddings.shape[1])  # Using L2 distance (Euclidean)
    index.add(context_embeddings)

    # Search for the most similar context
    _, indices = index.search(query_embedding, k=3)  # Retrieve top 3 similar contexts
    relevant_context = [context[i] for i in indices[0]]

    return relevant_context

# Main logic for the RAG chatbot
def rag_chatbot():
    # Step 1: Fetch monster, survivor, and resource data from APIs
    monsters = fetch_monster_data()
    survivors = fetch_survivor_data()
    resources = fetch_resource_data()

    # Step 2: Format the data into readable context
    context = format_monster_data(monsters)
    context += format_survivor_data(survivors)
    context += format_resource_data(resources)

    # Step 3: Chat loop
    print("Welcome to the RAG Chatbot! Ask me anything about survival.")
    while True:
        query = input("\nYour question (type 'exit' to quit): ")
        if query.lower() == "exit":
            print("Goodbye!")
            break
        
        # Step 4: Use FAISS to retrieve relevant context
        relevant_context = search_relevant_context(query, context)

        # Step 5: Generate a response based on the query and retrieved context
        response = generate_response(query, relevant_context)
        print("\nChatbot Response:", response)

# Example usage
if __name__ == "__main__":
    rag_chatbot()
