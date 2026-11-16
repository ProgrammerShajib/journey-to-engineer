#include <bits/stdc++.h>
using namespace std;

const int MAXN = 3e5 + 5;
vector<int> g[MAXN];
int operations[MAXN];
string s;

void dfs(int u) {
    // Left child processing
    if (g[u][0] != 0) {
        int v = g[u][0];
        if (s[u - 1] == 'L') {
            operations[v] = operations[u];
        } else {
            operations[v] = operations[u] + 1;
        }
        dfs(v);
    }

    // Right child processing
    if (g[u][1] != 0) {
        int v = g[u][1];
        if (s[u - 1] == 'R') {
            operations[v] = operations[u];
        } else {
            operations[v] = operations[u] + 1;
        }
        dfs(v);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // Clear graph and operations array for each test case
        for (int i = 0; i <= n; i++) {
            g[i].clear();
            operations[i] = 0;
        }

        cin >> s;
        for (int i = 1; i <= n; i++) {
            int l, r;
            cin >> l >> r;
            g[i].push_back(l);
            g[i].push_back(r);
        }

        dfs(1);

        int ans = INT_MAX;
        for (int i = 1; i <= n; i++) {
            // Leaf node check (both left and right child are 0)
            if (g[i][0] == 0 && g[i][1] == 0) {
                ans = min(ans, operations[i]);
            }
        }
        cout << ans << '\n';
    }

    return 0;
}