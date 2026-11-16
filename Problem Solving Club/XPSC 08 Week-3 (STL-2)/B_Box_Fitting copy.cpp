#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0;i<n;i++) cin >> v[i];
        
        sort(v.rbegin(),v.rend());
        multiset<int> khali;
        int ans = 0;
        for(auto c : v){
            auto it = khali.lower_bound(c);
            if(it == khali.end()){
                ans++;
                int noton_kali = k - c;
                khali.insert(noton_kali);
            }else{
                int availabel = *it;
                khali.erase(it);
                int noton_khali = availabel - c;
                khali.insert(noton_khali);
            }
        }

        cout << ans <<endl;
    }
    return 0;
}