#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        freq[val]++;
    }

    int odd_freq = 0;
    int even_freq = 0;

    for (auto const& [val, count] : freq) {
        if (val % 2 != 0) {  
            odd_freq = max(odd_freq,count);
        } else { 
            even_freq = max(even_freq,count);
        }
    }
    int ans1 = (odd_freq + 1)/ 2;
    int ans2 = (even_freq + 1)/ 2;

    cout << max(ans1, ans2) << "\n";
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