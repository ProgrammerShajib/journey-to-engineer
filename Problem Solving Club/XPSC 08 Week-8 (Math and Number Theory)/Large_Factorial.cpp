#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
// problem
        int ans  = 1;
        for(int i = 1;i<=n;i++){
            ans = (1LL * (ans % MOD) * (i % MOD)) % MOD;
        }


        cout << ans << endl;
    }
    return 0;
}