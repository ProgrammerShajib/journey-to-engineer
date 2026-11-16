#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n, k;
    cin>> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    
    auto ok = [&](ll mid){

        ll cnt = 0;
        for(ll i = n/2;i<n;i++){
            cnt += ((a[i] < mid) ? (mid-a[i]) : 0);
        }   
        return cnt <= k;
    };
    
    sort(a.begin(), a.end());
    ll l = 1, r = 2e9, mid, ans ;
    while(l <= r){
        mid = l + (r-l)/2;
        if(ok(mid)){
            ans = mid;
            l = mid+1;
        }else{
            r = mid-1;
        }
    }

    cout << ans ;

    return 0;
}