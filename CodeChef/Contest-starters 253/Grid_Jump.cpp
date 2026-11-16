#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll a, b, p, q, r;
        cin >> a >> b >> p >> q >> r;
        ll min_c = -1;
        
        ll l = min(a, b);
        for (ll k = 0; k <= l; k++) {
            ll rem_a = a - k;
            ll rem_b = b - k;
            ll curr_c = k * r;
            
            curr_c += ((rem_a + 1) / 2) * p;
            curr_c += ((rem_b + 1) / 2) * q;
            
            if (min_c == -1 || curr_c < min_c) {
                min_c = curr_c;
            }
        }
        cout << min_c << "\n";
    }
    return 0;
}