#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;cin>> t;
    while(t--){
        ll a,b;cin>> a >> b;

        ll c = 0, d = 0;
        for(ll i = 0;i<a;i++){
            ll f ;
            cin>> f;
            if(i == 0){
                c = f;
            }
        }
        for(ll i = 0;i<b;i++){
            ll f ;
            cin>> f;
            if(i == 0){
                d = f;
            }
        }

        ll l = c + a-1;
        ll r = d + b-1;

        if(l>= r){
            cout << 1 <<"\n";
        }else{
            cout <<2 <<"\n";
        }

    }
    return 0;
}