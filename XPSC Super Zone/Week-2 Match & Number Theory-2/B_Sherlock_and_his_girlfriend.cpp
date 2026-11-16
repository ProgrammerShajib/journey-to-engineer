#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll n;cin>> n;
    n++;
    vector<ll> color(n+1, 1);
    ll need_color = 1;


    for(ll i= 2;i<=n;i++){
        if(color[i] ==1 ){
            for(ll j = i*i; j <= n;j+=i){
                color[j] = 2;
                need_color = max(need_color, color[j]);
            }
        }
    }
    cout << need_color << "\n";
    for(ll i = 2;i<=n;i++) cout << color[i] <<" ";

    return 0;
}