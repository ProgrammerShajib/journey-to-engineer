#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin >> t;
    while(t--){
        int n;cin>> n;
        vector<int>v(n);
        for(int &i : v)cin >> i;
        int ans = 0;
        for(int i = 1;i<n;i++){
            int next = 7-v[i-1];
            if(v[i] == v[i-1] || v[i] == next){
                ans++;
                i++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}