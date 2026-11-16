#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min_moves = 1e9; 
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            
            if (a[i] == a[j]) {
                if (i == j && !(i == 0 && j == n - 1)) {
                    continue; 
                }

                int current_moves = i + (n - 1 - j);
                
                min_moves = min(min_moves, current_moves);
            }
        }
    }

    if (min_moves == 1e9) {
        cout << -1 << "\n";
    } else {
        cout << min_moves << "\n";
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