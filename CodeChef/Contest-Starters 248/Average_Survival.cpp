#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>> n;
        vector<int> a(n);
        for(auto &i : a)cin >> i;
        int big = 0 ;
        for(auto c : a ){
            big = max(big, c);
        }
        int ans = 0;
        for(auto c : a ){
            if(big == c){
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}

 