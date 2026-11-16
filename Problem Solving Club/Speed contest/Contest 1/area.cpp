#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long A, B;
        cin >> A >> B;
 
        long long s = 100 * B;
        long long l = 225 * A;

        if (s > l) {
            cout << "Small\n";
        } 
        else if (s < l) {
            cout << "Large\n";
        } 
        else {
            cout << "Equal\n";
        }
    }

    return 0;
}