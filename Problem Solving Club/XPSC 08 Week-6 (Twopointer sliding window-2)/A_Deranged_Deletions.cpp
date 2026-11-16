#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;cin>> n;
        vector<int>v(n);
        for(auto &i  : v)cin >> i;
        bool flag = false;
        int l = 0, r = 1;
        int x, y;
        while(r<n){
            if(v[l]>v[r]){
                flag = true;
                x = v[l];
                y = v[r];
                break;
            }
            l++ , r++;
        }
        if(flag){
            cout <<"YES\n";
            cout <<"2\n";
            cout <<x <<" " << y << "\n";
        }else{
            cout <<"NO\n";
        }
    }
    return 0;
}