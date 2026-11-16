#include <iostream>
using namespace std;
#define ll long long int

void solve() {
    ll x, y;
    cin >> x >> y;
    ll S = x + y;
    int target = -1;
    for (int i = 30; i >= 0; i--) {
        if (((x >> i) & 1) && !((S >> i) & 1)) {
            target = i;
            break;
        }
    }

    ll x_prime = 0;
    if (target == -1) {
        x_prime = x;
    } else {
        ll m_h = ~((1LL << (target + 1)) - 1);
        ll m_l = (1LL << target) - 1;
        x_prime = ((x & S) & m_h) | (S & m_l);
    }
    ll k = x - x_prime;
    cout << S << " " << k << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}