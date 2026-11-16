#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin >> t;
    while(t--){
        int l, r;
        cin>> l >> r;

        // int lcm = (l*2*l)/__gcd(l,2*l);
        // cout << lcm << endl;
        
        if(2*l <= r)cout << l << " " << 2*l << endl;
        else cout << -1 <<" " << -1 << endl;
        
    }
    return 0;
}