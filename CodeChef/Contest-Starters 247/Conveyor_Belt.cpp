#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, p;
        cin >> n >> p;
        string S;
        cin >> S;
        int l_c = 0, l_r = 0;
        for (int i = 0; i < p; i++) {
            if (S[i] == 'R')
                l_c++;
        }
        for (int i = p - 1; i < n; i++) {
            if (S[i] == 'L')
                l_r++;
        }
        cout << min(l_c, l_r) << "\n";
    }

    return 0;
}