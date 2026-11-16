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

        vector<long long> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        long long enter = A[0];
        long long ans = 0;

        for (int i = 1; i < N; i++) {
            enter = max(enter, A[i]);
            ans += enter - A[i];
        }

        cout << ans << "\n";
    }

    return 0;
}