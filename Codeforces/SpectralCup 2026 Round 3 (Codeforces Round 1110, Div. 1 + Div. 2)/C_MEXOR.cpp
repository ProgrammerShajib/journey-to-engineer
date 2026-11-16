#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;

    if (n == 1) {
        if (k == 1) {
            cout << "YES\n0\n";
        } else {
            cout << "NO\n";
        }
        return;
    }
    long long K_prime = k ^ n;
    long long m = 1;
    while (m <= n - 1) {
        m *= 2;
    }
    if (K_prime >= m) {
        cout << "NO\n";
        return;
    }
    vector<int> f(n - 1, 0);
    if (K_prime <= n - 1) {
        f[n - 2] = K_prime;
    } else {
        long long b = 1;
        while (b * 2 <= K_prime) {
            b *= 2;
        }
        long long a = K_prime ^ b;
        f[n - 3] = a;
        f[n - 2] = b;
    }

    vector<int> p(n);
    vector<bool> used(n, false);

    p[n - 1] = f[n - 2];
    used[p[n - 1]] = true;

    int mx = n - 1;  

    for (int i = n - 2; i >= 1; i--) {
        if (f[i] > f[i - 1]) {
            p[i] = f[i - 1]; 
        } else {
 
            while (mx >= 0 && used[mx]) {
                mx--;
            }
            p[i] = mx;
        }
        used[p[i]] = true;
    }

    while (mx >= 0 && used[mx]) {
        mx--;
    }
    p[0] = mx;

    cout << "YES\n";
    for (int i = 0; i < n; i++) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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