#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n,x;
        cin >> n >>x;
        vector<int> v(n);
        for(auto &i : v) cin >> i;
        sort(v.begin(), v.end(),greater<int>());
        int ans = 0;
        for(auto c : v){
            if(c%x == 0){
                ans = c;
                break;
            }
        }

       
        cout << ans << endl;
    }
    return 0;
}