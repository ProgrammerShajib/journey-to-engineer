#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> cnt(32, 0); 
        int mx_size = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            int msb_p = 31 - __builtin_clz(x); 
            cnt[msb_p]++;  
            mx_size = max(mx_size, cnt[msb_p]);
        }
        cout << mx_size << "\n";

    }

    return 0;
}