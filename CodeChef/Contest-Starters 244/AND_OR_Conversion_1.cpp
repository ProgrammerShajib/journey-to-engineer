#include <bits/stdc++.h>
using namespace std;


int cnt_seg(const string& s) {
    if (s.empty()) return 0;
    
    int count = 1;  
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i-1]) {
            count++;
        }
    }
    return count;
}

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "Yes\n";
        return;
    }

    int lenA = cnt_seg(a);
    int lenB = cnt_seg(b);

    if (a[0] == b[0]) {
        if (lenA >= lenB) cout << "Yes\n";
        else cout << "No\n";
    } else {
        if (lenA - 1 >= lenB) cout << "Yes\n";
        else cout << "No\n";
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