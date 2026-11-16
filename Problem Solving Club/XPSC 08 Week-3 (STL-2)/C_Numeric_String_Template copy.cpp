#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<int> v(n);
        for(auto &i : v) cin >> i;

        // store position of each value
        map<int,vector<int> > mp1;
        for(int i = 0;i<n;i++){
            int val = v[i];
            int pos = i+1;
            mp1[val].push_back(pos);
        }

        // Query
        int q;
        cin >> q;
        while(q--){
            string s;
            cin >> s;
            if(s.size() != n){
                cout <<"NO\n";
                continue;
            }
            // Store all letter position
            map<int,vector<int>> mp2;
            for(int i = 0;i<s.size();++i){
                char c = s[i];
                int pos = i+1;
                mp2[c].push_back(pos);
                
            }

            // Matching
            int flag = 1;
            map<int,int>duplicate;
            for(int i = 0;i<n;i++){
                int val = v[i];
                char ch = s[i];
                // Reduce the calculation for duplicate value
                if(duplicate[val] > 0){
                    continue;
                }
                // match the full vector for each character 
                if(mp1[val] != mp2[ch]){
                    flag = 0;
                    break;
                }
                duplicate[val]++;
            }

            if(flag){
                cout << "YES\n";
            }else{
                cout <<"NO\n";
            }

        }
    }
    return 0;
}