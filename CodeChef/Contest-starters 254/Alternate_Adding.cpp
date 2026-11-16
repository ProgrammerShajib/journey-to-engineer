#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<ll> a(n + 1);
            vector<ll> c(n + 2, 0); 
            for (int i = 1; i <= n; i++) {
                cin >> a[i];
                if (i % 2 != 0) {
                    c[i] = -a[i];
                } else {
                    c[i] = a[i];
                }
            }   
            ll ans = 0;    
            for (int i = 1; i <= n + 1; i++) {
                ll diff = c[i] - c[i - 1];
                if (diff > 0) {
                    ans += diff;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}