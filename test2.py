from sentence_transformers import SentenceTransformer
from transformers import pipeline
from sklearn.metrics.pairwise import cosine_similarity
import faiss
import os
import json

class RAGAnswerGenerator:
    def __init__(self, my_dir):
        self.my_dir = my_dir
        self.model_name = 'sentence-transformers/all-mpnet-base-v2'
        
        # Initialize sentence transformer for embeddings
        self.embedding_model = SentenceTransformer(self.model_name)
        self.embeddings_dim = self.embedding_model.get_sentence_embedding_dimension()
        
        # Initialize FAISS index
        self.index = faiss.IndexFlatIP(self.embeddings_dim)
        self.metadata = []  # Stores metadata corresponding to FAISS embeddings
        
        # Load documents and build vectorstore
        self._build_vectorstore()
        
        # Initialize Hugging Face model for text generation
        self.generation_model = pipeline(
            "text-generation",
            model="gpt2",
            device=-1,  # Use CPU
            tokenizer="gpt2"
        )

    def _build_vectorstore(self):
        documents = []

        # Load documents from the directory
        for filename in os.listdir(self.my_dir):
            if filename.endswith('.txt'):
                filepath = os.path.join(self.my_dir, filename)
                try:
                    with open(filepath, 'r', encoding='utf-8') as file:
                        text = file.read()
                        documents.append({"content": text, "source": filename})
                except Exception as e:
                    print(f"Error reading file {filename}: {e}")

        # Split documents into chunks
        chunk_size = 500
        chunk_overlap = 100
        chunks = []

        for doc in documents:
            text = doc["content"]
            source = doc["source"]

            for i in range(0, len(text), chunk_size - chunk_overlap):
                chunk = text[i:i + chunk_size]
                chunks.append({"text": chunk, "source": source})

        # Generate embeddings and add them to FAISS
        for chunk in chunks:
            embedding = self.embedding_model.encode(chunk["text"], convert_to_numpy=True)
            self.index.add(embedding.reshape(1, -1))
            self.metadata.append(chunk)

    def _retrieve_relevant_chunks(self, question, top_k=3):
        # Encode the query
        query_embedding = self.embedding_model.encode(question, convert_to_numpy=True).reshape(1, -1)

        # Search in FAISS index
        distances, indices = self.index.search(query_embedding, top_k)

        relevant_chunks = []
        for idx in indices[0]:
            if idx < len(self.metadata):
                relevant_chunks.append(self.metadata[idx])

        return relevant_chunks

    def _generate_answer(self, question, context):
      # Combine context into a single string
      combined_context = "\n".join([chunk["text"] for chunk in context])
      prompt = f"Context: {combined_context}\n\nQuestion: {question}\nAnswer:"

      # Generate the answer
      response = self.generation_model(
          prompt,
          max_new_tokens=100,  # Number of tokens to generate
          num_return_sequences=1,
          truncation=True,     # Enable truncation
          pad_token_id=self.generation_model.tokenizer.eos_token_id  # Handle padding
      )
      return response[0]["generated_text"].strip()

    def generate_answer(self, question):
        # Retrieve relevant chunks
        relevant_chunks = self._retrieve_relevant_chunks(question)

        # Generate answer based on context
        answer = self._generate_answer(question, relevant_chunks)

        # Format sources
        sources = "\n\nSources:" + ''.join([f"\n- {chunk['source']}" for chunk in relevant_chunks])

        return answer + sources

class RAGChatPipeline:
    def __init__(self, my_dir):
        self.my_dir = my_dir
        self.rag_generator = RAGAnswerGenerator(my_dir)

    def run_chat(self):
        print("Starting the RAG Chat System...")
        print("Type 'exit' to quit the chat.")

        while True:
            try:
                user_question = input("\nAsk a question about the maps: ").strip()

                if user_question.lower() in ["exit", "quit", "q"]:
                    print("Exiting the chat...Bye Bye!")
                    break

                if not user_question:
                    continue

                answer = self.rag_generator.generate_answer(user_question)
                print("\nAnswer:", answer)

            except KeyboardInterrupt:
                print("\nChat interrupted. Type 'exit' to quit.")
            except Exception as e:
                print(f"An error occurred: {e}")

def main():
    my_dir = r'D:\RAG_1\hackocalypsebot\docs\scenarios\sample_scenario_1'
    if not os.path.exists(my_dir):
        print(f"Error: Directory {my_dir} does not exist.")
        return

    pipeline = RAGChatPipeline(my_dir)
    pipeline.run_chat()

if __name__ == "__main__":
    main()
