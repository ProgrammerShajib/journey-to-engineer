#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int id, q;
        cin >> id >> q;
        map<int,set<int>> mp;
        for(int i = 1;i<=id;i++){
            int a;
            cin >> a;
            mp[a].insert(i);
        }
 
        while(q--){
            int l,r;
            cin >> l >> r;
            int start_index, end_index;
            if(mp.find(l) == mp.end() || mp.find(r) == mp.end()){
                cout << "NO\n";
            }else{
                start_index = *mp[l].begin();
                end_index = *mp[r].rbegin();

                if(start_index < end_index){
                    cout << "YES\n";
                }else{
                    cout << "NO\n";

                }
            }
        }
    }
    return 0;
}