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
        map<string,vector<int>> mp;
        for(int i = 1;i<=3;i++){
            for(int j = 1;j<=l;j++){
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }
        vector<int> ans(4);
        for(auto [k,v] : mp){
            vector<int> v2 = v;
            int size = v2.size();
            if(size == 1){
                ans[v2[0]] += 3;
            }else if(size == 2){
                ans[v2[0]]++;
                ans[v2[1]]++;   
            }  
        }
        for(int i = 1;i<=3;i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}