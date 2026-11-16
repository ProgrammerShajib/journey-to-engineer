#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll n, t;cin>> n  >> t;
    vector<ll> a(n);
    for(auto &i : a) cin >> i;

    auto ok = [&](ll sec){
        ll cnt = 0;
        for(ll i = 0; i<n;i++){
            cnt += (sec/a[i]);
            if(cnt>= t){
                return true;
            }
        }

        return false;

    };
    ll l = 1, r = 1e18, mid = 0, ans =0;
    while(l<=r){
        mid = l + (r-l)/2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }

    cout << ans ;
    return 0;
}