#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
const ll INF = 1e18;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // dp[i][0] -> বর্তমান ইনডেক্সটি সাধারণ (Normal)
    // dp[i][1] -> বর্তমান ইনডেক্সটি রিসিভার (Receiver)
    vector<vector<ll>> dp(n, vector<ll>(2, INF));

    // বেস কেস (Base Cases)
    dp[0][0] = a[0];
    if (n > 1) {
        ll S = a[0] + a[1];
        ll max_sender = min(a[0] - 1, S / 2);
        dp[1][1] = S - max_sender;
    }

    for (int i = 0; i < n; i++) {
        // ১. বর্তমান ইনডেক্সটি যদি স্বাভাবিক (Normal) থাকে
        if (dp[i][0] != INF) {
            if (i + 1 < n && a[i + 1] >= dp[i][0]) {
                dp[i + 1][0] = min(dp[i + 1][0], a[i + 1]);
            }

            if (i + 2 < n) {
                ll S = a[i + 1] + a[i + 2];
                ll max_sender = min(a[i + 1] - 1, S / 2);
                if (max_sender >= dp[i][0]) {
                    dp[i + 2][1] = min(dp[i + 2][1], S - max_sender);
                }
            }
        }

        // ২. বর্তমান ইনডেক্সটি যদি রিসিভার (Receiver) থাকে
        if (dp[i][1] != INF) {
            if (i + 1 < n && a[i + 1] >= dp[i][1]) {
                dp[i + 1][0] = min(dp[i + 1][0], a[i + 1]);
            }

            if (i + 2 < n) {
                ll S = a[i + 1] + a[i + 2];
                ll max_sender = min(a[i + 1] - 1, S / 2);
                if (max_sender >= dp[i][1]) {
                    dp[i + 2][1] = min(dp[i + 2][1], S - max_sender);
                }
            }
        }
    }

    if (dp[n - 1][0] != INF || dp[n - 1][1] != INF) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}