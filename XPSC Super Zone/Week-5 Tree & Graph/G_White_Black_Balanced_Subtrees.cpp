#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int N = 2e5 + 10;

vector<int> g[N];
int white_ct[N];
int black_ct[N];
int ans;

void dfs(int vertex, int par, const string &s) {
    // 1-based indexing for vertices, 0-based indexing for string s
    if (s[vertex - 1] == 'W') {
        white_ct[vertex] = 1;
        black_ct[vertex] = 0;
    } else {
        white_ct[vertex] = 0;
        black_ct[vertex] = 1;
    }

    for (int child : g[vertex]) {
        if (child == par) continue;
        dfs(child, vertex, s);
        
        // Subtree Pre-computation logic
        white_ct[vertex] += white_ct[child];
        black_ct[vertex] += black_ct[child];
    }

    // Check if the subtree rooted at vertex is balanced
    if (white_ct[vertex] == black_ct[vertex]) {
        ans++;
    }
}

void solve() {
    int n;
    cin >> n;

    // Reset data structures for each test case
    for (int i = 1; i <= n; ++i) {
        g[i].clear();
        white_ct[i] = 0;
        black_ct[i] = 0;
    }
    ans = 0;

    // Reading Parent Array and building adjacency list
    for (int i = 2; i <= n; ++i) {
        int parent;
        cin >> parent;
        g[parent].push_back(i);
        g[i].push_back(parent);
    }

    string s;
    cin >> s;

    // Root of the tree is always 1
    dfs(1, 0, s);

    cout << ans << "\n";
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