#include <iostream>
#include <vector>

using namespace std;

void preorder_dfs(int u, const vector<vector<int>>& adj) {
    cout << u << " ";
    for (int child : adj[u]) {
        preorder_dfs(child, adj);
    }
}

void solve() {
    int n;
    cin >> n; // Read size 'n' dynamically from input
    
    // Dynamically create adjacency list of size (n + 1)
    vector<vector<int>> adj(n + 1);
    
    // Read n-1 parent values (for 1-based tree where root is 1)
    for (int i = 2; i <= n; i++) {
        int parent;
        cin >> parent;
        adj[parent].push_back(i); // Add child 'i' to parent's list
    }

    
    
    cout << "Preorder Traversal: ";
    preorder_dfs(1, adj);
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve();
    }
    
    return 0;
}