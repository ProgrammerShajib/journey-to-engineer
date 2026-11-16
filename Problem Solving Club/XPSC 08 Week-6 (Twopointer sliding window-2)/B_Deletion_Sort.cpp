#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(auto &i : v)cin >> i;
        if(is_sorted(v.begin(),v.end())) cout << n <<"\n";
        else cout << 1 <<"\n";
    }
    return 0;
}