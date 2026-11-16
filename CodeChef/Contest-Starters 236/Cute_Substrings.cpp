#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mx = 0;

        for (int i = 0; i < n; i++) {
            int len = 0;

            for (int j = i; j < n; j++) {
                len++;
                if (len % 2 == 1) {
                    if (s[j] != 'o' && s[j] != 'u') break;
                } else {
                    if (s[j] != 'w') break;
                }
                if (len % 2 == 1) {
                    mx = max(mx, len);
                }
            }
        }

        cout << mx << "\n";
    }

    return 0;
}