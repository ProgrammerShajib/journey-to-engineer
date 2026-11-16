#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, x;
    cin >> n >> x;
    
    int k = min(n, (3 * n - x) / 2);
    
    int rem = x - 2 * (n - k);
    
    string a(3 * n, '0');
    for (int i = 0; i < n; i++) {
        int base = (i < k) ? 0 : 2;
        int extra = (i < rem) ? 1 : 0;
        
        int total_ones = base + extra;
        
        if (total_ones >= 1) a[i] = '1';
        if (total_ones >= 2) a[i + n] = '1';
        if (total_ones == 3) a[i + 2 * n] = '1';
    }
    
    cout << a << "\n";
}

int main() {
    // Fast I/O optimization
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}