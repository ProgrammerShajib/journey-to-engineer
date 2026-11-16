#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;cin>> t;
    ll x_pos= 0;
    ll x_neg= 0;
    while(t--){
        ll x,y;
        cin>> x >> y;
        if(x<0){
            x_neg++;
        }else{
            x_pos++;
        }
    }

    if(x_pos >1 && x_neg>1){
        cout << "No\n";
    }else{
        cout << "Yes\n";
    }
    return 0;
}