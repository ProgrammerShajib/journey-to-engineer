#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    vector<int> v(n);
    int mx = 0;
    for(auto &i : v)cin >> i;

    for(auto c : v) mx = max(c,mx);
    int ans = 0;
    for(auto c : v) ans+= c == mx;
    cout << ans << "\n" ;

}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t = 1;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}