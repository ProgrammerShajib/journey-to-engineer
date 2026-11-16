#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;cin>> t;
    while(t--){
        ll n;cin>> n;
        vector<ll> freq(30);
        for(ll i = 0;i<n;i++){
            ll x ;
            cin>> x ;
            ll b = __lg(x);
            freq[b]++;

        }

        ll ans = 0;
        for(auto c : freq){
            ans += (1LL * c *(c-1))/2;
        }

        cout << ans <<"\n";
    }
    return 0;
}