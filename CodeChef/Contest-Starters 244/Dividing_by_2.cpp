#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    map<long long, pair<int, int>> mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
        long long cur = a[i];
        int op = 0;
        
        while (true) {
            mp[cur].first++;       
            mp[cur].second += op;  
            
            if (cur == 0) break;
            cur /= 2;
            op++;
        }
    }

    int min_op = INT_MAX;

    for (auto const& [val, stats] : mp) {
        int freq = stats.first;
        int total = stats.second;

        if (freq == n) {
            min_op = min(min_op, total);
        }
    }

    cout << min_op << "\n";
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