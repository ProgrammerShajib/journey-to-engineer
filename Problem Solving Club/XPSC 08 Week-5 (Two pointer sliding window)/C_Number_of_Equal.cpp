#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    map<int,int> mp1,mp2;
    for(int i = 0;i<a ;i++){
        int val;cin >> val;
        mp1[val]++;
    }
    for(int i = 0;i<b ;i++){
        int val;cin >> val;
        mp2[val]++;
    }

    long long  ans = 0;
 
    for(auto [key,val] : mp1){
            // cout << key <<" " << val <<endl;
            ans += 1ll * val * mp2[key];
    }
    cout << ans ;

    return 0;
}