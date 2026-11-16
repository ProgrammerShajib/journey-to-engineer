#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    if (c[0] == c[n - 1]) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (c[i] == c[0]) count++;
        }
        if (count >= k) cout << "YES\n";
        else cout << "NO\n";
        return;
    }

    int first_color_count = 0;
    int first_color_end_idx = -1;
    
    for (int i = 0; i < n; i++) {
        if (c[i] == c[0]) {
            first_color_count++;
            if (first_color_count == k) {
                first_color_end_idx = i;
                break;
            }
        }
    }

    int last_color_count = 0;
    int last_color_start_idx = -1;
    
    for (int i = n - 1; i >= 0; i--) {
        if (c[i] == c[n - 1]) {
            last_color_count++;
            if (last_color_count == k) {
                last_color_start_idx = i;
                break;
            }
        }
    }

    if (first_color_end_idx != -1 && last_color_start_idx != -1 && first_color_end_idx < last_color_start_idx) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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