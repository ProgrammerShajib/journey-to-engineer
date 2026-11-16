#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), pos;

    int first_m1 = -1, last_m1 = -1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) pos.push_back(i);
        if (a[i] == -1) {
            if (first_m1 == -1) first_m1 = i;
            last_m1 = i;
        }
    }

    // প্রথম ও শেষ -১ কে সম্ভাব্য ১ হিসেবে ধরে নেওয়া
    if (first_m1 != -1) pos.push_back(first_m1);
    if (last_m1 != -1) pos.push_back(last_m1);

    sort(pos.begin(), pos.end());

    int best_L = -1, best_R = -1, max_len = 0;

    // সর্টেড ইনডেক্স থেকে সবচেয়ে বড় গ্যাপটি খুঁজে নেওয়া
    for (size_t i = 0; i + 1 < pos.size(); i++) {
        int len = pos[i + 1] - pos[i] + 1;
        if (len > max_len) {
            max_len = len;
            best_L = pos[i];
            best_R = pos[i + 1];
        }
    }

    // সব -১ কে ০ বানিয়ে দেওয়া
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) a[i] = 0;
    }

    // সেরা দুটি ইনডেক্সে ১ বসানো
    if (best_L != -1) a[best_L] = 1;
    if (best_R != -1) a[best_R] = 1;

    // আউটপুট প্রিন্ট
    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}