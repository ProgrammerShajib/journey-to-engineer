#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;cin>> t;
    while(t--){
        ll n, k;cin>> n >> k;
        vector<ll> a(n);
        for(auto &i : a)cin >> i;
        ll total = 0;
        for(auto c : a) total += c;

        ll mx = total - (k*n);
        sort(a.begin(), a.end());

        ll pair_sum = mx;
        ll p = n/2;
        for(int i = 0;i<p;i++){
            pair_sum = pair_sum + k - a[i];
            mx = max(pair_sum, mx);
        }

        cout << mx << endl;
    }
    return 0;
}