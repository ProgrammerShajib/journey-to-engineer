#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    long long total_inversions = 0;
    long long count_ones = 0;

    // ১ বার লুপ চালিয়ে মোট ইনভার্সন সংখ্যা গণনা
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count_ones++;
        } else {
            total_inversions += count_ones;
        }
    }

    // গেম থিওরির আসল উইনিং কন্ডিশন
    string fwin;
    if (total_inversions > 0) {
        fwin = "Alice";
    } else {
        fwin = "Bob";
    }

    cout << fwin << "\n";
}

int main() {
    // স্ট্যান্ডার্ড I/O এর গতি বাড়ানোর জন্য
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}