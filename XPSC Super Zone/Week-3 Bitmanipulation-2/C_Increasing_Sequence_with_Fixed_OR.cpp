#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;cin>> t;
    while(t--){
        ll n;cin>>n;
        deque<ll> ans;
        for(ll k = 0;k <=__lg(n);k++){
            if((n>>k) &1){
                ll val = n-(1LL <<k);
                if(val != 0){
                    ans.push_front(val);
                }
            }
        }
        ans.push_back(n);
        cout << ans.size() <<"\n";
        for(auto c : ans) cout << c <<" ";
        cout << "\n";
    }
    return 0;
}