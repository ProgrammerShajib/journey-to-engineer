#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n, t;
    cin>> n >> t;
    map<int,bool> mp;
    for(int i = 0;i<n;i++){
        int a;
        cin>> a;
        mp[a] = true;
    }

    int ans = 0;
    for(int i =0;i<t;i++){
        if(mp.find(i) == mp.end()){
            ans++;
        }
    }

    if(mp.find(t) != mp.end()){
        ans++;
    }

    cout << ans <<"\n";
    return 0;
}