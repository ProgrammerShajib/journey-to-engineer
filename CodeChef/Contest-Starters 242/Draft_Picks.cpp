#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> strength(N + 1, 0);

        int card = K;
        bool forward = true;

        while (card > 0) {
            if (forward) {
                for (int i = 1; i <= N && card > 0; i++) {
                    strength[i] += card;
                    card--;
                }
            } else {
                for (int i = N; i >= 1 && card > 0; i--) {
                    strength[i] += card;
                    card--;
                }
            }
            forward = !forward;
        }

        long long ans = *max_element(strength.begin() + 1, strength.end());
        cout << ans << '\n';
    }

    return 0;
}