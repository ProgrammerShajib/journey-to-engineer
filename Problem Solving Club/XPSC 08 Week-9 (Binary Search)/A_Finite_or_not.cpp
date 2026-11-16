#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    long long p, q, b;
    cin >> p >> q >> b; 
    long long common = gcd(p, q); 
    q /= common; 
    while (true) {
        long long g = gcd(q, b); 
        if (g == 1) {
            break; 
        }
        while (q % g == 0) {
            q /= g; 
        }
        b = g; 
    }
    if (q == 1) {
        cout << "Finite\n";  
    } else {
        cout << "Infinite\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}