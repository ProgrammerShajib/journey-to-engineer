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

        int G = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            G |= A[i];
        }

        int segments = 0;
        int cur = 0;

        for (int i = 0; i < N; i++) {
            cur |= A[i];

            if (cur == G) {
                segments++;
                cur = 0;
            }
        }

        cout << N - segments << '\n';
    }

    return 0;
}