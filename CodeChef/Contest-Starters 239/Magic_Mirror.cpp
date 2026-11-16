#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int l = (n / 2) - 1;
    int r = n / 2;
    
    bool is_ok = true;
    
    while (l > 0 && r < n - 1) {
        int left_gap = a[l] - a[l - 1];
        int right_gap = a[r + 1] - a[r];
        
        if (left_gap != right_gap) {
            is_ok = false;
            break;
        }
        l--;
        r++;
    }
    if (is_ok) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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