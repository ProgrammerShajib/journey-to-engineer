#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
         
        vector<int> v(3);
        for(auto &i : v)cin>> i;
        sort(v.begin(), v.end());
        int d_max = v[2] - v[1];
        int d_min = v[1] - v[0];
    
       cout << min(d_max, d_min) << "\n";
    }
    return 0;
}