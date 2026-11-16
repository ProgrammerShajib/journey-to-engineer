#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll n;cin>>n;
    vector<pair<ll,ll>> v(n);
    for(ll i = 0;i<n;i++){
        ll distance, velocity;cin>> distance >>velocity;
        v[i] = {distance, velocity};
    }

    auto ok = [&](double mid){
     
        double mx =   (v[0].first - (mid*v[0].second)) ;
        double mn =  (v[0].first + (mid*v[0].second)) ;

        for(int i = 1;i<n;i++){

            mx = max(mx, (v[i].first - (mid*v[i].second)) );
            mn = min(mn, (v[i].first + (mid*v[i].second)) );
         
        }
        return mn >= mx;
    };
    double l = 0, r = 1e10;
    for(ll i = 0;i<100;i++){
        double mid = l+ (r-l)/2;
        if(ok(mid)){
            r = mid;
        }else{
            l = mid;
        }
    }

    cout << fixed << setprecision(6)<< r ;
    return 0;
}