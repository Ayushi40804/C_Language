import faiss
import numpy as np
import streamlit as st

# Define API URLs and headers
GROQ_API_KEY = "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"
GROQ_API_URL = "https://api.groq.com/openai/v1/chat/completions"

# Function to parse text file using Groq
def parse_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        text = f.read()
    chunks = text.split('\n\n')  # Split into paragraphs for chunking
    return chunks

# Function to create FAISS index using Groq embeddings
def create_faiss_index(chunks):
    embeddings = []
    for chunk in chunks:
        embedding = embedder.predict({"text": chunk})
        embeddings.append(embedding)
    embeddings = np.array(embeddings)
    index = faiss.IndexFlatL2(embeddings.shape[1])
    index.add(embeddings)
    return index, chunks

# Function to retrieve relevant context using Groq
def retrieve_context(query, index, chunks, top_k=3):
    query_embedding = embedder.predict({"text": query})
    distances, indices = index.search(np.array([query_embedding]), top_k)
    return [chunks[idx] for idx in indices[0]]

# Function to generate answer using Groq
def generate_answer(query, context):
    prompt = f"Context: {context}\n\nQuestion: {query}\nAnswer:"
    response = generator.predict({"prompt": prompt, "max_tokens": 150})
    return response['generated_text']

# Streamlit App for Interactive Chat
def main():
    st.title("RAG-based Chatbot with Groq API")
    st.sidebar.header("Upload Text File")
    uploaded_file = st.sidebar.file_uploader("Upload your text file", type=["txt"])
    
    if uploaded_file:
        st.success("File uploaded successfully!")
        chunks = parse_file(uploaded_file)
        index, chunk_data = create_faiss_index(chunks)
        
        st.text_area("Parsed Text Data", "\n\n".join(chunks[:5]), height=200)
        
        st.header("Ask Your Question")
        user_query = st.text_input("Type your question here")
        if st.button("Submit"):
            if user_query:
                context = " ".join(retrieve_context(user_query, index, chunk_data))
                answer = generate_answer(user_query, context)
                st.subheader("Answer:")
                st.write(answer)

if __name__ == "__main__":
    main()
