#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if (val == 1) {
            cnt1++;
        } else {
            cnt2++;
        }
    }

    if (cnt1 == n || cnt2 == n) {
        cout << 0 << "\n";
        return;
    }

    int ans = cnt2;

    if (cnt1 % 2 == 0) {
        ans = min(ans, cnt1 / 2);
    }

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