#include <iostream>
#include <vector>

using namespace std;

vector<long long> leaf_count;
vector<vector<int>> adj;

void dfs(int u, int p) {
    bool is_leaf = true;
    leaf_count[u] = 0;

    for (int v : adj[u]) {
        if (v != p) {
            is_leaf = false;
            dfs(v, u);
            leaf_count[u] += leaf_count[v];
        }
    }

    if (is_leaf) {
        leaf_count[u] = 1;
    }
}

void solve() {
    int n;
    cin >> n;

    adj.assign(n + 1, vector<int>());
    leaf_count.assign(n + 1, 0);

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);

    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
        long long ans = leaf_count[x] * leaf_count[y];
        cout << ans << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}