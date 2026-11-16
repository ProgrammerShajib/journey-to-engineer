#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int l;
        cin >> l;
        vector<int > v;

        for(int i = 0;i<l;i++){
            int a;
            cin >> a;
            v.push_back(a);
        }

        map<int ,bool> mp;
        vector<int> final;
        for(int i = l-1 ; i>=0;i--){
             
            if(mp.find(v[i]) != mp.end()){
             
                break;
            }else{
                mp.insert({v[i], true});
                final.push_back(v[i]);
            }
        }   

        int len = final.size();
        // cout << v.size() <<" " << len;
        cout << v.size() - len <<"\n";

    }

    
    return 0;
}