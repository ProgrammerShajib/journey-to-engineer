#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool good(ll mid , ll n , ll h, vector<ll> &a, vector<ll> &c){
    ll cnt = 0;
    for(ll i = 0;i<n;i++){
        cnt = min(cnt+(1 + (mid-1)/c[i])*a[i], h);
    }
    return cnt>= h;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;cin>> t;
    while(t--){
        ll h, n;cin>> h >>n;
        vector<ll > a(n), c(n);
        for(auto &i : a)cin >> i;
        for(auto &i : c)cin >> i;
        ll l = 0, r = 1e12;
        while(l+1<r){
            ll mid = l + (r-l)/2;
            if(good(mid, n, h, a, c)){
                r = mid;
            }else{
                l = mid;
            }
        }

        cout << r << endl;

    }
    return 0;
}