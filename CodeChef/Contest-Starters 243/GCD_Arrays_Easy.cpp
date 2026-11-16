#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAXM = 100;

long long modexp(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int mu[MAXM + 1];

void mobius() {
    for (int i = 1; i <= MAXM; i++) mu[i] = 1;

    vector<int> prime;
    vector<bool> vis(MAXM + 1, false);

    for (int i = 2; i <= MAXM; i++) {
        if (!vis[i]) {
            prime.push_back(i);
            for (int j = i; j <= MAXM; j += i) {
                vis[j] = true;
                mu[j] *= -1;
            }
            for (int j = i * i; j <= MAXM; j += i * i) {
                mu[j] = 0;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    mobius();

    int T;
    cin >> T;

    while (T--) {
        long long N;
        int M;
        cin >> N >> M;

        vector<long long> cnt(M + 1, 0);

        // count multiples
        for (int d = 1; d <= M; d++) {
            for (int x = d; x <= M; x += d) {
                cnt[d]++;
            }
        }

        long long ans = 0;

        for (int d = 1; d <= M; d++) {
            if (mu[d] == 0) continue;

            long long ways = modexp(cnt[d], N);
            ans = (ans + mu[d] * ways) % MOD;
        }

        ans = (ans % MOD + MOD) % MOD;

        cout << ans << "\n";
    }

    return 0;
}