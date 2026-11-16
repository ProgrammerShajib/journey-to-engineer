#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        map<int,int> mp;
        for(int i = 0;i<n;i++){
            int c;
            cin >> c ;
            v.push_back(c);
            mp[c]++;
        }
        int ans = 0;
        for(auto [val,c] : mp){
            int prev = val -1;
            if(mp[prev] > mp[val]){
                ans +=0;
            }else{
                int extra = mp[val] - mp[prev];
                ans += extra;
            }
        }

        cout << ans <<endl;
    }
    return 0;
}