#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> f(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> f[i];

        if (n == 2) {
            cout << f[2] << ' ' << f[1] << '\n';
            continue;
        }

        vector<long long> d(n);

        for (int i = 1; i < n; i++)
            d[i] = f[i + 1] - f[i];

        vector<long long> a(n + 1);

        // recover a[2..n-1]
        for (int i = 2; i <= n - 1; i++) {
            a[i] = (d[i] - d[i - 1]) / 2;
        }

        long long M = 0;
        for (int i = 2; i <= n - 1; i++) {
            M += a[i] * (i - 1);
        }

        long long S =
            (2LL * (f[1] - M)) / (n - 1) + d[n - 1];

        a[n] = (S - d[n - 1]) / 2;

        long long sumKnown = a[n];
        for (int i = 2; i <= n - 1; i++)
            sumKnown += a[i];

        a[1] = S - sumKnown;

        for (int i = 1; i <= n; i++) {
            if (i > 1) cout << ' ';
            cout << a[i];
        }
        cout << '\n';
    }

    return 0;
}