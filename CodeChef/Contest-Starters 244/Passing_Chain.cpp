#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int cur = 1;

        while (cur + k <= n) {
            cur += k;
        }

        cout << cur << '\n';
    }
}