#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        int mn = INT_MAX, mx = INT_MIN;
        for(int i = 0;i<n;i++){
            int b ;cin>> b;
            mx = max(mx, b);
            mn = min(mn, b);
        }
        cout << mx - mn + 1 << "\n";
    }
    return 0;
}