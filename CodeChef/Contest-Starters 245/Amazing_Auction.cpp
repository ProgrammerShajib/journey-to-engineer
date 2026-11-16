#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<long long> a(n) , c(n);
    for(auto &i : a) cin >>i;    
    for(auto &i : c) cin >>i;
    

    set<long long> candidate(a.begin(), a.end());

    long long max_profit = -1e18;  

    for (long long x : candidate) {
        int cnt_big = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > x) {
                cnt_big++;
            }
        }

        if (cnt_big > k) {
            continue;
        }

        int m = k + 1 - cnt_big;
        vector<long long> costs;
        costs.reserve(n);

        for (int i = 0; i < n; i++) {
            if (a[i] <= x) {
                costs.push_back((x - a[i]) * c[i]);
            }
        }

        sort(costs.begin(), costs.end());

        long long total_cost = 0;
        for (int i = 0; i < m; i++) {
            total_cost += costs[i];
        }

        long long profit = (long long)k * x - total_cost;
        max_profit = max(max_profit, profit);
    }

    cout << max_profit << "\n";
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