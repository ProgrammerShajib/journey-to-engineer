#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        vector<long long> a(n);
        for(auto &i: a) cin >> i;
        
        long long totalWaiting = 0;
        long long preMax = 0;
        vector<long long> directDepend(n);
        for(int i=0;i<n;++i) {
            preMax = max(preMax, a[i]);
            totalWaiting += preMax - a[i];
            directDepend[i] = preMax - a[i];
        }

        for(auto c : directDepend) cout << c <<" "; cout << endl;
        // new = total - directDepend[i] - dependinI + dependent[rem];
        set<pair<long long, long long>> st; // [value, index]
        st.insert({0,0});
        st.insert({0,0});
        vector<long long> depend(n+1);
        vector<long long> dependAfterRemove(n+1);
        for(int i=0;i<n;++i) {
            st.insert({a[i], i});
            // 1st maximum
            auto it = st.end(); it--;
            auto [val1, idx1] = *it;
            long long depValue = val1 - a[i];
            depend[idx1] += depValue;
            
            // 2nd maximum
            it--;
            auto [val2, idx2] = *it;
            long long depValue2 = max(0LL, val2 - a[i]);
            dependAfterRemove[idx1] += depValue2;
        }
        long long ans = totalWaiting;
        // new = total - directDepend[i] - dependinI + dependent[rem];
        for(int i=0;i<n;++i) {
            long long cur = totalWaiting - directDepend[i] - depend[i] + dependAfterRemove[i];
            ans = min(cur, ans);
        }
        cout << ans << endl;
    }
}