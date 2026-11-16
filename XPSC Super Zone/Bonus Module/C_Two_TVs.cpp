#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    map<int , int> mp;
    while(t--){
        int a, b;cin>> a >> b;
        mp[a]++;
        mp[b+1]--;

    }

    int sum = 0;
    bool ans = true;
    for(auto [a,b]: mp){
        sum += b;
        if(sum >2){
            ans = false;
            break;
        }
    }
    if(ans){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}