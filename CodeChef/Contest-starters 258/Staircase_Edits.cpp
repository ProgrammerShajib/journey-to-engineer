#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
    cin >> n;
    unordered_map<int, int> freq;
    int mx = 0;
    for (int i = 1; i <= n; ++i) {
        int val;
        cin >> val;
        int diff = val - i;
        freq[diff]++;
        mx = max(mx, freq[diff]);
    }
    
    cout << n - mx << "\n";
    }
    
    return 0;
}