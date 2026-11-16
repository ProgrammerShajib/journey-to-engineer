#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll n, x, y;
    cin>> n >> x >> y;

    if(n == 1){
        cout << min(x,y);
        return 0;
    }
    ll l = -1, r = 1e18;

    auto ok = [&](ll mid){
       
        ll total = (mid/x) + (mid/y);
        return total >= n-1;
    };
    while(r-l > 1){
        ll mid = l + (r - l)/2;

        if(ok(mid)){
            r = mid;
        }else{
            l = mid;
        }
    }
    cout << r + min(x,y) ;

    return 0;
}