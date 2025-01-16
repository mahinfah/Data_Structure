#include <iostream>
#include <queue>
using namespace std;

class Graph {
private:
    int vertices;                 // Number of vertices
    int **adjacencyMatrix;        // Adjacency matrix to represent the graph

public:
    // Constructor
    Graph(int v) {
        vertices = v;

        // Allocate memory for adjacency matrix
        adjacencyMatrix = new int*[v];
        for (int i = 0; i < v; i++) {
            adjacencyMatrix[i] = new int[v];
            for (int j = 0; j < v; j++) {
                adjacencyMatrix[i][j] = 0; // Initialize all values to 0
            }
        }
    }

    // Destructor to clean up memory
    Graph() {
        for (int i = 0; i < vertices; i++) {
            delete[] adjacencyMatrix[i];
        }
        delete[] adjacencyMatrix;
    }

    // Function to add an edge
    void addEdge(int src, int dest) {
        adjacencyMatrix[src][dest] = 1; // Directed graph
    }

    // BFS function
    void BFS(int startVertex) {
        bool visited[vertices]; // Array to track visited vertices  [ false false false false false ]
        for (int i = 0; i < vertices; i++) {
            visited[i] = false;
        }

        queue<int> bfsQueue; // Queue for BFS

        // Start from the given vertex
        visited[startVertex] = true;
        bfsQueue.push(startVertex);

        cout << "BFS Traversal starting from vertex " << startVertex << ": ";

        while (!bfsQueue.empty()) {
            int currentVertex = bfsQueue.front();
            bfsQueue.pop();
            cout << currentVertex << " ";

            // Traverse all adjacent vertices
            for (int i = 0; i < vertices; i++) {
                if (adjacencyMatrix[currentVertex][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    bfsQueue.push(i);
                }
            }
        }

        cout << endl;
    }
};

int main() {
    // Create a graph with 5 vertices
    Graph graph(5);

    // Add edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(2, 0);
    graph.addEdge(2, 3);
    graph.addEdge(3, 3);

    // Perform BFS traversal
    graph.BFS(2);

    return 0;
}
