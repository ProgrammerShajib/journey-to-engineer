#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    

    
    ll w, h, n;cin>> w>> h >> n;
    ll l = -1, r = max(w,h)*n;
    
    auto ok  = [&](ll mid){

        ll r_w = mid/w;
        ll r_h = mid/h;
        if(r_w == 0 || r_h == 0) return false;
        if(r_w >= n || r_h >= n) return true;
        return (mid/w)*(mid/h) >=n;
    };

    while(r - l > 1){
        ll mid = l + (r- l)/2;
        if(ok(mid)){
            r = mid;
        }else{
            l = mid;
        }
    }

    cout << r;

    return 0;
}