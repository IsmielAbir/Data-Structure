#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Graph class represents a directed graph using an adjacency list representation
class Graph {
  // Number of vertices
  int V;
  // adjacency list
  unordered_map<int, vector<int>> adj;

public:
  // Constructor
  Graph(int V) : V(V) {}

  // Add an edge from vertex u to vertex v
  void addEdge(int u, int v) { adj[u].push_back(v); }

  // Return the adjacency list for vertex u
  vector<int>& operator[](int u) { return adj[u]; }

  // Return the number of vertices
  int getV() const { return V; }
};

int main() {
  // Read in the number of vertices and edges
  int V, E;
  cout << "Enter the number of vertices and edges: ";
  cin >> V >> E;

  Graph g(V);

  // Read in the edges
  cout << "Enter the edges (u v):" << endl;
  for (int i = 0; i < E; i++) {
    int u, v;
    cin >> u >> v;
    g.addEdge(u, v);
  }

  // Print the adjacency list representation of the graph
  for (int u = 0; u < g.getV(); u++) {
    cout << u << ": ";
    for (int v : g[u]) {
      cout << v << " ";
    }
    cout << endl;
  }
  return 0;
}
