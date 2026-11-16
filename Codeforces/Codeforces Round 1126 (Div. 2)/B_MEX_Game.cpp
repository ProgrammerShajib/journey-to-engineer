#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> cnt(n + 2, 0);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a <= n + 1) {
            cnt[a]++;
        }
    }
    
    int mex = 0;
    while (cnt[mex] >= k) {
        mex++;
    }

    bool ok = true;
    for (int i = 0; i < mex; i++) {
        if (cnt[i] % 2 != 0) {
            ok = false;
            break;
        }
    }
    
   
    if (ok) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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