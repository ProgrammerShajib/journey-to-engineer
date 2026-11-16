#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long get_prefix_sum(long long x, long long k) {
    return x * (2 * k + x - 1) / 2;
}

void solve() {
    long long n, k;
    cin >> n >> k;

    long long total_sum = get_prefix_sum(n, k);

    long long low = 1, high = n;
    long long ans_x = n;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long sum1 = get_prefix_sum(mid, k);
        long long sum2 = total_sum - sum1;

        if (sum1 >= sum2) {
            ans_x = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    long long sum1_curr = get_prefix_sum(ans_x, k);
    long long diff1 = abs(sum1_curr - (total_sum - sum1_curr));

    long long min_diff = diff1;
    if (ans_x > 1) {
        long long sum1_prev = get_prefix_sum(ans_x - 1, k);
        long long diff2 = abs(sum1_prev - (total_sum - sum1_prev));
        min_diff = min(diff1, diff2);
    }

    cout << min_diff << "\n";
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