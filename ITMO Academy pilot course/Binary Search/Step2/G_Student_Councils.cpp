#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll k ;cin>>k;
    ll g ;cin>>g;
    vector<ll> a(g);
    for(auto &i : a)cin >> i;
    auto ok = [&](ll mid){
        ll total = 0;
        for(auto c : a){
             total += min (c, mid);
        }

        return total >= mid*k;
    };
    ll l = 0, r = 1e12;
    while(r-l > 1){
        ll mid = l + (r-l)/2;
        if(ok(mid)){
            l = mid;
        }else{
            r = mid;
        }
    }

    cout << l ;
    return 0;
}