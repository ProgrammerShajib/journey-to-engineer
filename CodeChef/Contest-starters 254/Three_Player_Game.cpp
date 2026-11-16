#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            ll n;
            cin>>n;
            ll ans =3*(n/2)+1;
            cout << ans<< "\n";
        }
    }

    return 0;
}