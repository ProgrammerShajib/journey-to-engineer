#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

// একটি নির্দিষ্ট ইনডেক্স i এবং তার চারপাশের জোড়াগুলোর স্কোর হিসাব করার ফাংশন
ll get_contribution(const vector<int>& a, int i, int n) {
    ll res = 0;
    // বামের জোড়া: (i-1, i)
    if (i > 0) {
        res += min(a[i - 1], a[i]);
    }
    // ডানের জোড়া: (i, i+1)
    if (i < n - 1) {
        res += min(a[i], a[i + 1]);
    }
    return res;
}

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // শুরুতে পুরো অ্যারের মোট স্কোর হিসাব করা
    ll total_score = 0;
    for (int i = 0; i < n - 1; i++) {
        total_score += min(a[i], a[i + 1]);
    }

    while (q--) {
        int i, x;
        cin >> i >> x;
        i--; // 1-based index কে 0-based এ রূপান্তর

        // ১. ওই ইনডেক্স বদলানোর আগে তার কন্ট্রিবিউশন বিয়োগ করুন
        total_score -= get_contribution(a, i, n);

        // ২. মান আপডেট করুন
        a[i] = x;

        // ৩. নতুন মানের কন্ট্রিবিউশন যোগ করুন
        total_score += get_contribution(a, i, n);

        cout << total_score << "\n";
    }
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