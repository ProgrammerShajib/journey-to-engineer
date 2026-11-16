#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int k = 63;
    
    int ans =(1LL << k) -1;
    // ans = LLONG_MAX;
    cout << bitset<70> (ans);

    // int t;cin>> t;
    // while(t--){
    //     int n;cin>>n;
    //     vector<int> v(n);
    //     for(auto &i : v) cin >> i;
    //     int ans = v[0];
    //     for(int i = 0;i<n;i++){
    //         ans &= v[i];
    //     }

    //     cout << ans <<"\n";
    // }
    return 0;
}