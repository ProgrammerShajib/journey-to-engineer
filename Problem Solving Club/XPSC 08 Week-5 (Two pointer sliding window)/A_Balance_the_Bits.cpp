#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int ones = 0;
    for (char c : s) {
        if (c == '1') ones++;
    }
    if (ones % 2 != 0 || s[0] == '0' || s[n - 1] == '0') {
        cout << "NO" << endl;
        return;
    }
    string a = "", b = "";
    int current_ones = 0;
    bool flip_zero = true;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            current_ones++;
            if (current_ones <= ones / 2) {
                a += '(';
                b += '(';
            } else {
                a += ')';
                b += ')';
            }
        } else {
            if (flip_zero) {
                a += '(';
                b += ')';
            } else {
                a += ')';
                b += '(';
            }
            flip_zero = !flip_zero;
        }
    }
    cout << "YES" << endl;
    cout << a << endl;
    cout << b << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}