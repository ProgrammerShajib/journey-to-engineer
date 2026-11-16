#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i ;

        map<int,int> idx;
        for(int i = 0;i<n;i++){
            idx[a[i]] = max(idx[a[i]], i+1);
        }

        vector<int > uniq;
        for(auto [x,i] : idx ) uniq.push_back(x);
        // for(auto c : uniq) cout << c <<" ";
        

        int ans = -1;
        for(int i = 0;i<uniq.size();i++){
            for(int j = 0;j < uniq.size();j++){
                int gc = __gcd(uniq[i], uniq[j]);
                if(gc == 1){
                    ans = max(ans, idx[uniq[i]] + idx[uniq[j]]);
                }
            }
        }

        cout << ans << endl;
        
    } 
    return 0;
}