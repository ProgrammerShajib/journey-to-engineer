#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int l,k;cin>> l >> k;
        string s ; cin >> s;
        int o = 0;
        for(int i = 0;i<l ;i++){
            if(s[i] == '1'){
                o++;
            }
        }

        // int z = l - o;
        int ans = k+ o;
        cout << ans << endl;
    }
    return 0;
}