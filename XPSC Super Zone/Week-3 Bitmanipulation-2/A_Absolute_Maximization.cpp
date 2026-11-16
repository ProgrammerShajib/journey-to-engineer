#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>> n;

        int mx = 0;
        int mn = 0;
        vector<int> a(n);
        for(auto &i : a)cin>> i;
        mx = a[0];
        mn = a[0];
        for(int i = 1;i<n;i++){
            mx |= a[i];
            mn &= a[i];
        }

        cout << mx - mn <<"\n";
    }
    return 0;
}