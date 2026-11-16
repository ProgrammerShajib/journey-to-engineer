#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        int c1 = 0, c2 = 0;
        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) {
                if (A[i] % 2 == 0) c1++;
                if (A[i] % 2 == 1) c2++;
            } else {
                if (A[i] % 2 == 1) c1++;
                if (A[i] % 2 == 0) c2++;
            }
        }

        cout << min(c1, c2) << "\n";
    }

    return 0;
}