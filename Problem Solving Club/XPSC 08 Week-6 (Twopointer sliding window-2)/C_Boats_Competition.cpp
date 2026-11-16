#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n ;cin>> n;
        vector<int> v(n);
        for(auto &i : v)cin >> i;
        map<int,int>mp;
        for(int i = 0;i<n;i++){
            mp[v[i]]++;
        }

        int final = 0;
        for(int s = 2; s<= 2*n;s++){
            int current = 0;
            for(auto [x,cntx] : mp){
                int y = s - x;
                if(mp.find(y) != mp.end()){
                    int cnty = mp[y];
                    current += min(cntx, cnty);

                }
            }
            current /= 2;
            final = max(final, current);
        }
        cout << final <<endl;
    }
    return 0;
}