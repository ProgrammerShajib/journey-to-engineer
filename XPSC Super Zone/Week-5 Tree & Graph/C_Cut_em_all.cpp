#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> sz;

void dfs(int u, int par) {
    sz[u] = 1;
    for (auto &v : adj[u]) {
        if (v == par) continue;
        dfs(v, u);
        sz[u] += sz[v];
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    adj.resize(n + 1);
    sz.resize(n + 1, 0);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // If total nodes are odd, it's impossible to form all even components
    if (n % 2 != 0) {
        cout << -1 << "\n";
        return 0;
    }

    // Compute subtree sizes assuming node 1 is the root
    dfs(1, 0);

    int ans = 0;
    // Check nodes from 2 to n (excluding root 1)
    for (int i = 2; i <= n; i++) {
        cout << i <<" " <<sz[i] << endl;
        if (sz[i] % 2 == 0) {
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}