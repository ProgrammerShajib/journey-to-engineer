#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> pos(n + 1);
    
    // ১. প্রতিটি সংখ্যার আসল পজিশন স্টোর করে রাখা
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        pos[p[i]] = i; 
    }

    vector<long long> dp(n + 1, 0);
    vector<long long> pref(n + 1, 0);

    // বেস কেস: ১ সংখ্যাটিকে ১ নম্বর পজিশনে বসানোর উপায় ১টি
    dp[1] = 1;
    pref[1] = 1;

    // ২. ২ থেকে N পর্যন্ত সংখ্যাগুলো একের পর এক ইনসার্ট করা
    for (int i = 2; i <= n; i++) {
        vector<long long> next_dp(n + 1, 0);
        vector<long long> next_pref(n + 1, 0);

        // শর্ত চেক: i-1 কি i এর বামে ছিল?
        bool goes_after = (pos[i - 1] < pos[i]);

        for (int j = 1; j <= i; j++) {
            if (goes_after) {
                // i বসবে i-1 এর ডানে: 1 থেকে j-1 পর্যন্ত উপায়ের যোগফল
                next_dp[j] = pref[j - 1];
            } else {
                // i বসবে i-1 এর বামে: j থেকে i-1 পর্যন্ত উপায়ের যোগফল
                next_dp[j] = (pref[i - 1] - pref[j - 1] + MOD) % MOD;
            }
            
            // প্রিফিক্স সাম আপডেট করা
            next_pref[j] = (next_pref[j - 1] + next_dp[j]) % MOD;
        }

        dp = next_dp;
        pref = next_pref;
    }

    // ৩. N পর্যন্ত বসানোর পর মোট কতগুলো উপায় পেলাম (pref[n] এ সবগুলোর যোগফল আছে)
    cout << pref[n] << "\n";
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