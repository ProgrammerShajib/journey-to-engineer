#include <bits/stdc++.h>
using namespace std;
   
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> c(n);
        int mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> c[i];
            mx = max(mx, c[i]);
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (c[i] <= c[j]) {
                    mx = max(mx, c[i] + c[j]);
                }
            }
        }
        cout << mx << "\n";
    }
    return 0;
}