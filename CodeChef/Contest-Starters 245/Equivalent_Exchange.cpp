#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        int L = 0, R = k;
        int pref = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            pref += x;

            L = max(L, -pref);
            R = min(R, k - pref);
        }

        cout << (L <= R ? "Yes" : "No") << '\n';
    }

    return 0;
}