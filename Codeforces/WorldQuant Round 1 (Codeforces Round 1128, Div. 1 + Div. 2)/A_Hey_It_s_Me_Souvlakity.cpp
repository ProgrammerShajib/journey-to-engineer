#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int cnt = 0;
        int first = -1, last = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                cnt++;

                if (first == -1)
                    first = i;

                last = i;
            }
        }

        if (cnt >= 3) {
            cout << last - first << '\n';
        } else if (cnt == 2 && n % 2 == 0) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }

    return 0;
}