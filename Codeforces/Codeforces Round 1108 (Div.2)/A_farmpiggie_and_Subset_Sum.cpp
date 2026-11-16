#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n + 1);
        vector<int> a, b;

        for (int i = 2; i <= n; i += 2){

            a.push_back(i);
        }
        for (int i = 1; i <= n; i += 2){

            b.push_back(i);
        }
        int e = 0, o = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1)
                p[i] = a[e++];
            else
                p[i] = b[o++];
        }
        for (int i = 1; i <= n; i++)
            cout << p[i] << " ";

        cout << "\n";
    }

    return 0;
}