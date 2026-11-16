#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;
    
    vector<int> a(n);
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }
    
    if (total_sum < s) {
        cout << -1 << "\n";
        return;
    }
    
    int left = 0, right =0;
    int current_sum = 0;
    int max_len = 0;

    
    while(right < n){
        current_sum += a[right];
        while(current_sum > s){
            current_sum -= a[left];
            left++;
        }

        if(current_sum == s){
            max_len = max(max_len ,right -left + 1 );
        }
        right++;
    }
    cout << n - max_len << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    
    return 0;
}

// Keep it up Shajib You can do it 