#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
         

        long long d = 1;
        bool ok = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < d) {
                ok = false;
                break;
            }
            a[i + 1] += (a[i] - d);
            d++;
        }
        if (ok && a[n - 1] < d)
            ok = false;
        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}