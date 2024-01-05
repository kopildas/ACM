#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 1005;  // Maximum number of vertices

int n;                   // Number of vertices in the graph
vector<int> adj[MAXN];   // Adjacency list representation of the graph
bool vis[MAXN];          // Array to track visited vertices during DFS

// Function to perform topological sort on a DAG
vector<int> topological_sort() {
    vector<int> sorted;  // Vector to store topological sort
    for (int v = 0; v < n; v++) {
        if (!vis[v]) {
            dfs(v, sorted);  // Perform DFS and store vertices in reverse order
        }
    }
    reverse(sorted.begin(), sorted.end());  // Reverse the order to get the topological sort
    return sorted;
}

// Recursive DFS function that stores the vertices in reverse order
void dfs(int v, vector<int>& sorted) {
    vis[v] = true;  // Mark vertex as visited
    for (int i = 0; i < adj[v].size(); i++) {
        int neighbor = adj[v][i];  // Get the next neighbor to visitsakjkkj
        if (!vis[neighbor]) {
            dfs(neighbor, sorted);  // Visit the neighbor's subtree
        }
    }
    sorted.push_back(v);  // Add vertex to the sorted list
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

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);  // Add edge to adjacency list
    }

    vector<int> sorted = topological_sort();

if (sorted.size() == n) {  // Check if topological sort was successful
    cout << "Topological sort: ";
    for (int i = 0; i < sorted.size(); i++) {
        cout << sorted[i] << " ";
    }
    cout << endl;
} else {
    cout << "The graph is not a DAG." << endl;
}
