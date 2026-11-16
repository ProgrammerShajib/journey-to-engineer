#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        vector<int> v(n+1, -1); 
        int max_all = 0; 
        for(int i = 1; i <= n; i++) {
            int val = a[i]; 
            if(val == 1) {
                v[1] = max(v[1], max_all + 1);
                max_all = max(max_all, v[1]);
            } else {
                int prev = val - 1;
                if(prev <= n && v[prev] != -1) {
                    v[val] = max(v[val], v[prev] + 1);
                    max_all = max(max_all, v[val]);
                }
            }
        }
        cout << max_all << "\n";
    }
    return 0;
}