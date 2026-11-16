#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void solve() {
    int n;
    cin >> n;
    
    long long max_sum = 0;
    long long min_ops = 0;
    bool in_negative_segment = false; 
    
    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        max_sum += abs(val);
 
        if (val < 0) {
            if (!in_negative_segment) {
                min_ops++;
                in_negative_segment = true;  
            }
        } else if (val > 0) {
            in_negative_segment = false;
        }
    }
    
    cout << max_sum << " " << min_ops << "\n";
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