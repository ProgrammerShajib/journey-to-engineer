#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    vector<string> v;
    map<string,bool> mp;
    while(t--){
        string s;
        cin  >> s;
        v.push_back(s);     
        mp.insert({s,false});    
    }

    for(auto c : v){
        if(!mp[c]){
            cout << "NO" <<"\n";
            mp[c] = true;
        }else{
            cout << "YES" << "\n";
        }
    }


   
}