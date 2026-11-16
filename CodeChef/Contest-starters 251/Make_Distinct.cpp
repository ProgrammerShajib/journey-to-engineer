#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        ll next_val = 0;
        ll max_diff = 0;
        ll sum_diff = 0;
        for (int i = 0; i < n; i++) {
            ll target = max(a[i], next_val);
            ll diff = target - a[i];

            max_diff = max(max_diff, diff);  
            sum_diff += diff;              
            next_val = target + 1;  
        }

        ll total = (sum_diff + k - 1) / k;
        ll ans = max(max_diff, total);

        cout << ans << "\n";
    }

    return 0;
}