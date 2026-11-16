#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(auto &i : a)cin >> i;

        int l = 0, r = 1;
        int mx = 0, mn = 1e9;
        while(r<n){
            mx = max(a[l], a[r]);
            mn = min(mx, mn);
            l++, r++;
        }

        cout << mn-1 <<endl;
    }
    return 0;
}