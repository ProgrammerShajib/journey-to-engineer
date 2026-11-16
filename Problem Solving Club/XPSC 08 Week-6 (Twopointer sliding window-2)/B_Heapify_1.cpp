#include <iostream>
#include <vector>

using namespace std;

int get_base_id(int num) {
    while (num % 2 == 0) {
        num /= 2;
    }
    return num;
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    bool possible = true;
    for (int i = 1; i <= n; i++) {
        if (get_base_id(i) != get_base_id(a[i])) {
            possible = false;
            break;
        }
    }
    // hello
    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}