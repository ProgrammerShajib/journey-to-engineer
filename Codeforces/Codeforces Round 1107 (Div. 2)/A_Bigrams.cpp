#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;cin>> t;
    while(t--){
        ll x;cin>> x;
        ll cnt  = 0;
        bool flag = false;
        while(x--){

            ll k ;cin >> k;
            if(k >= 3){
                flag = true;
            }else if( k == 2){
                cnt ++;
            }
        }

        if(flag || cnt>= 2){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}