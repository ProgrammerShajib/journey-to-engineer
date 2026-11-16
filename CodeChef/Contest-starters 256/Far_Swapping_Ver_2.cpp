#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 998244353;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--){
            int n;
    cin >> n;
    vector<int> p(n);
    vector<int> pos(n + 1);
    
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        pos[p[i]] = i; 
    }
    vector<ll> dp(n + 1, 0);
    vector<ll> pref(n + 1, 0);
    dp[1] = 1;
    pref[1] = 1;
    for (int i = 2; i <= n; i++) {
        vector<ll> my_dp(n + 1, 0);
        vector<ll> new_pref(n + 1, 0);
        bool f = (pos[i - 1] < pos[i]);
        for (int j = 1; j <= i; j++) {
            if (f) {
                my_dp[j] = pref[j - 1];
            } else {
                my_dp[j] = (pref[i - 1] - pref[j - 1] + MOD) % MOD;
            }
            new_pref[j] = (new_pref[j - 1] + my_dp[j]) % MOD;
        }
        dp = my_dp;
        pref = new_pref;
    }
    cout << pref[n] << "\n";
    }
    return 0;
}