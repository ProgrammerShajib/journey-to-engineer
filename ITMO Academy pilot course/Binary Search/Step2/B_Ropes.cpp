#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n,k;cin>> n >>k;
    vector<int> a(n);
    for(auto &i : a)cin >>i;
    auto ok =[&](double mid){

        ll ans = 0;
        for(auto c : a){
            ans += (ll)(c/mid);
        }
        return ans >= k;
    };

    double l =0, r = 1e8;
    for(int i = 0 ;i<100;i++){
        double mid = l + (r-l)/2;
        if(ok(mid)){
            l = mid;
        }else{
            r = mid;
        }
    }

    cout << fixed <<  setprecision(6) <<l;

    return 0;
}