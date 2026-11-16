#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        
        int n , m ;cin>> n >> m;
        vector<int> a(n), b(m);
        for(auto &i : a)cin >> i;
        for(auto &i : b)cin >> i;
        if (n < 2 * m) {
            cout << "NO\n";
            continue;
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        bool possible = true;
        for (int i = 0; i < m; i++) {
            if (a[i] >= b[i] || a[n - m + i] <= b[i]) {
                possible = false;
                break;
            }
        }
        if (possible) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
