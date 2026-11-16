#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin >> n;
    string s ;cin >> s;
    int ans = 1e9;
    for(int i = 0;i<26;i++){
        int l = 0,r = n-1;
        int cnt= 0;
        bool palindrom  = true;
        while(l<r){
            if(s[l] == s[r]){
                l++,r--;
            }else if (s[l] != s[r]){
                if(s[l] == 'a'+i){
                    l++;
                    cnt++;
                }else if(s[r] == 'a'+i){
                    r--;
                    cnt++;
                }else{
                    palindrom = false;
                    break;
                }
            }
        }
        if(palindrom){
            ans = min(ans, cnt);
        }
    }
    if(ans == 1e9){
        cout << -1 <<"\n";
    }else{
        cout << ans <<"\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}