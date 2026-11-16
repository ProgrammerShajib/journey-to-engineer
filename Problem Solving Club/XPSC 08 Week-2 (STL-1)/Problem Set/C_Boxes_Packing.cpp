#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin >> n;

    map<int,int>mp;
    while(n--){
        int a;
        cin >> a;
        mp[a]++;
    }

    int mx = 0;
    for(auto c : mp){
        if(c.second > mx){
            mx = c.second;
        }

    }

    cout << mx ;
    return 0;
}