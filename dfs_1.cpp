#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1005;  // Maximum number of vertices

int n;                   // Number of vertices in the graph
vector<int> adj[MAXN];   // Adjacency list representation of the graph
bool vis[MAXN];          // Array to track visited vertices during DFS

// DFS function that returns true if it encounters a visited vertex
// (indicating a cycle) or false if it completes for all vertices
bool dfs(int v) {
    vis[v] = true;  // Mark vertex as visited
    for (int i = 0; i < adj[v].size(); i++) {
        int neighbor = adj[v][i];  // Get the next neighbor to visit
        if (vis[neighbor]) return true;  // Return true if neighbor is visited (cycle detected)
        if (dfs(neighbor)) return true;  // Return true if cycle is detected in the neighbor's subtree
    }
    vis[v] = false;  // Mark vertex as not visited before returning
    return false;
}

// Function to determine whether the graph is a DAG
bool is_dag() {
    for (int v = 0; v < n; v++) {
        if (!vis[v]) {
            if (dfs(v)) return false;  // Return false if cycle is detected
        }
    }
    return true;  // Return true if no cycles detected
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);  // Add edge to adjacency list
    }

    if (is_dag()) {
        cout << "The graph is a DAG." << endl;
    } else {
        cout << "The graph is not a DAG." << endl;
    }

    return 0;
}
