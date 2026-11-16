#include <iostream>
#include <vector>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt_0 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            cnt_0++;
        }
    }
    if (cnt_0 < 2) {
        cout << -1 << "\n";
        return;
    }
    if (a[0] == 0 && a[n - 1] == 0) {
        cout << 0 << "\n";
    }
    else if (a[0] == 0 || a[n - 1] == 0) {
        cout << 1 << "\n";
    }
    else {
        cout << 2 << "\n";
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