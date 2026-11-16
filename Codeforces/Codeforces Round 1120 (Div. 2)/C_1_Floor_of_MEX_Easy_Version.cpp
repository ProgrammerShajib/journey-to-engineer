#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> diff(n + 1, 0);

    for (int k = 1; k <= n; k++) {
        long long L = a[k] * k;
        long long R = (a[k] + 1) * k - 1;

        long long l_idx = max(0LL, L);
        long long r_idx = min((long long)n - 1, R);

        if (l_idx <= r_idx) {
            diff[l_idx]++;
            diff[r_idx + 1]--;
        }
    }

    vector<int> B;
    int current_overlap = 0;
    for (int i = 0; i < n; i++) {
        current_overlap += diff[i];
        if (current_overlap == 0) {
            B.push_back(i);
        }
    }
    cout << B.size() << "\n";
    for (int i = 0; i < (int)B.size(); i++) {
        cout << B[i] << (i == (int)B.size() - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}