#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int  t;cin>> t;
    while(t--){
        int  n , k;cin >> n >> k;
        string s;cin>> s;

        map<char, int > mp;
        for(auto c : s){
            mp[c]++;
        }


        int ans = 0;
        for(char a = 'A' ; a<= 'G';a++){
            if(mp[a] < k){
                ans += k - mp[a];
            }
        }

        cout << ans << endl;
    }
    return 0;
}