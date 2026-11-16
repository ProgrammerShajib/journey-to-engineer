#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;cin>> t;
    while(t--){
        ll a, b;cin>> a >> b;
        ll d = a&b;
        ll c = a|b;
        if(d != 0){
            cout << (a^d) + (b ^ d) << "\n";
        }else{
            
            cout << (a^c) + (b ^ c) << "\n";
        }
    }
    return 0;
}