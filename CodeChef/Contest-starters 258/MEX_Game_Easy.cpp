#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    vector<long long> freq(n + 2, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] <= n + 1) {
            freq[a[i]]++;
        }
    }
    
    // Step 1: Find initial MEX
    long long mex = 0;
    while (freq[mex] > 0) {
        mex++;
    }
    
    // Step 2: Calculate total valid moves
    long long total_moves = 0;
    
    // For elements > MEX, they can only be reduced down to MEX + 1
    for (int i = 0; i < n; ++i) {
        if (a[i] > mex) {
            total_moves += (a[i] - mex - 1);
        }
    }
    
    // For elements < MEX, extra copies (> 1) can be reduced down to 0
    for (int v = 1; v < mex; ++v) {
        if (freq[v] > 1) {
            total_moves += (freq[v] - 1) * v;
        }
    }
    
    // Step 3: Determine winner based on move parity
    if (total_moves % 2 != 0) {
        cout << "Alice\n";
    } else {
        cout << "Bob\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}