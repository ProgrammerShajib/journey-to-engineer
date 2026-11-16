#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
 
    for(auto &i : a) cin>> i;
    for(auto &i : b) cin>> i;
    for (int i = n - 1; i > 0; --i) {
        if (a[i] > b[i]) {
            long long extra = a[i] - b[i];
            a[i - 1] += extra; 
            a[i] = b[i];
        }
    }

    if(a[0] <= b[0]){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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