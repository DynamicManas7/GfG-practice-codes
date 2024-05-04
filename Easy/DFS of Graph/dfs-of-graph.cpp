//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    // Function to perform depth-first search (DFS)
    void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls) {
        vis[node] = 1; // Mark the current node as visited
        ls.push_back(node); // Add the current node to the DFS traversal result
        for (int i = 0; i < adj[node].size(); i++) { // Iterate over the adjacency list of the current node
            if (!vis[adj[node][i]]) { // If the adjacent node is not visited yet
                dfs(adj[node][i], adj, vis, ls); // Recursively call DFS for the adjacent node
            }
        }
    }

    // Function to return a list containing the DFS traversal of the graph
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0}; // Initialize an array to keep track of visited nodes
        vector<int> ls; // Initialize a vector to store the DFS traversal result
        int start=0;
        dfs(start,adj, vis, ls);
        return ls; // Return the DFS traversal result
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends