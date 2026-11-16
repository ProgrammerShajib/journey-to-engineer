#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int square = c * c;

        if (a * b <= square) {
            cout << 0 << "\n";
        }
        else if ((square / b) >= 1 || (square / a) >= 1) {
            cout << 1 << "\n";
        }
        else {
            cout << 2 << "\n";
        }
    }

    return 0;
}