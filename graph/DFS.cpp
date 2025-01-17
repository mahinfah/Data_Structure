#include <iostream>
using namespace std;

class Graph {
    int vertices;     // Number of vertices
    int** adjMatrix;  // Pointer to the adjacency matrix

public:
    // Constructor
    Graph(int V) {
        vertices = V;

        // Dynamically allocate the adjacency matrix
        adjMatrix = new int*[V];
        for (int i = 0; i < V; i++) {
            adjMatrix[i] = new int[V];
            for (int j = 0; j < V; j++) {
                adjMatrix[i][j] = 0; // Initialize with 0 (no edge)
            }
        }
    }

    // Destructor
    ~Graph() {
        for (int i = 0; i < vertices; i++) {
            delete[] adjMatrix[i];
        }
        delete[] adjMatrix;
    }

    // Add edge to the graph
    void addEdge(int u, int v) {
        adjMatrix[u][v] = 1; // Add an edge from u to v
        adjMatrix[v][u] = 1; // Add an edge from v to u (undirected graph)
    }

    // Utility function for DFS
    void DFSUtil(int v, bool visited[]) {
        visited[v] = true; // Mark the current node as visited
        cout << v << " ";

        // Recur for all adjacent vertices
        for (int i = 0; i < vertices; i++) {
            if (adjMatrix[v][i] == 1 && !visited[i]) { // If edge exists and not visited
                DFSUtil(i, visited);
            }
        }
    }

    // DFS traversal starting from a given vertex
    void DFS(int startVertex) {
        bool* visited = new bool[vertices]; // Create a visited array
        for (int i = 0; i < vertices; i++) {
            visited[i] = false; // Mark all vertices as not visited
        }

        // Call the utility function for DFS
        DFSUtil(startVertex, visited);

        delete[] visited; // Clean up
    }
};

// Driver program
int main() {
    Graph g(5); // Create a graph with 5 vertices

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    cout << "Depth-First Traversal starting from vertex 0:" << endl;
    g.DFS(0);

    return 0;
}

