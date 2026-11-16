#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int l;
        cin >> l;

        string s;
        cin >> s;

        int cnt = 0, mx = 0;

        for (int i = 0; i < l; i++) {
            if (s[i] == '#') {
                cnt++;
            } else {
                mx = max(mx, cnt);
                cnt = 0;
            }
        }

        mx = max(mx, cnt);

        cout << (mx + 1) / 2 << "\n";
    }

    return 0;
}