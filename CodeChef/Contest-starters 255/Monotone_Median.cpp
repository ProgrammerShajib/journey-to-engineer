#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n + 1);
    vector<int> pos(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        pos[p[i]] = i;
    }

    int k = (n + 1) / 2;
    vector<pair<int, int>> ans;

    // Base case: M_1 = 1
    int L = pos[1];
    int R = pos[1];
    ans.push_back({L, R});

    for (int i = 2; i <= k; i++) {
        int target_pos = pos[i];
        L = min(L, target_pos);
        R = max(R, target_pos);
        int req_len = 2 * i - 1;
        int curr_len = R - L + 1;

        if (curr_len > req_len) {
            cout << -1 << "\n";
            return;
        }

        // Expand further if curr_len < req_len
        int diff = req_len - curr_len;

        // Try expanding L to the left if possible, else expand R to the right
        while (diff > 0) {
            if (L > 1) {
                L--;
            } else if (R < n) {
                R++;
            }
            diff--;
        }

        ans.push_back({L, R});
    }

    // Output results
    for (auto p : ans) {
        cout << p.first << " " << p.second << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}