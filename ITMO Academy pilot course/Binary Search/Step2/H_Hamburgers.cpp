#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    string t ;cin>>t;
    ll cnt_b =0, cnt_s= 0, cnt_c = 0;
    for(int i = 0;i<t.size();i++){
        if(t[i] =='B'){
            cnt_b++;
        }else if(t[i] == 'S'){
            cnt_s++;
        }else{
            cnt_c++;
        }
    }
    ll nb, ns, nc;cin>> nb>> ns>> nc;
    ll pb, ps, pc;cin>> pb>> ps>>pc;
    ll money ;cin>> money;


    auto ok = [&](ll mid){
        // Required bread, sausege, chees
        ll r_b = mid*cnt_b;
        ll r_s = mid*cnt_s;
        ll r_c = mid*cnt_c;

        r_b = max(0ll,(r_b - nb));
        r_s = max(0ll,(r_s - ns));
        r_c = max(0ll,(r_c - nc));
        ll total_cost = (r_b * pb) +(r_s * ps) +(r_c * pc) ;
         

        return money >= total_cost;
    };

    ll l = 0, r = 1e14;
    while(r-l> 1){
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