#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int POW(int x, int b){

    int ans = 1 % MOD;
    while(b){

        if(b & 1){
            ans = (1LL * ans%MOD * x % MOD)%MOD;
        }

        x = (1LL * x%MOD * x%MOD ) % MOD;
        b >>= 1;
    }

    return ans ;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n, b;cin>> n >> b;
        cout << POW(n,b) <<endl;
    }
    return 0;
}