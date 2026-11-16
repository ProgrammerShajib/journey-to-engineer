#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n , m;cin>> n >> m;
        ll L = max(0, n-m);
        ll R = m+n;

        ll diff = L^R;
        if(diff == 0){
            cout << L <<"\n";
             
        }else{
            ll msb = __lg(diff);
            // int msb = 63 - __builtin_clzll(diff);
            ll mask = (1LL<<(msb+1)) -1;    
            cout << (L | R | mask) <<"\n";

        }
    }
    
    return 0;
}