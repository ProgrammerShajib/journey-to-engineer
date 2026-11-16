#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin>> t;
    while (t--) {
        ll n, k;
        cin>> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m = n - k;
        ll cur = 0;
        for (int i = 0; i < m; i++) {
            cur += a[i];
        }
        ll ans = cur;
        for (int i = m; i < n; i++) {
            cur += a[i] - a[i - m];
            ans = max(ans, cur);
        }
        cout << ans << "\n";
    }
    return 0;
}