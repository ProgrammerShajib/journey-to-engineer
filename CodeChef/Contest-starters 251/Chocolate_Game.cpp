#include <iostream>
using namespace std;
void solve() {
    int n;
    cin >> n;
    long long sum = 0;
    int odd = 0;
    for (int i = 0;i<n;i++) {
        int a;
        cin >>a;
       sum += a;
        if (a % 2 != 0) {
            odd++;
        }
    }
    if (sum % 2 == 0) {
        cout << sum - (odd / 2) << "\n";
    } else {
        cout << odd / 2 << "\n";
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}