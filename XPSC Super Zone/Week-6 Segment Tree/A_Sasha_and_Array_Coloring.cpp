#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &i : a)cin >> i;
        sort(a.begin(),a.end());
        
        int ans = 0;
        for(int i=0;i<n/2;i++){
            ans += a[n -1 -i] - a[i];
        }
        cout << ans <<endl;
    }
    return 0;
}