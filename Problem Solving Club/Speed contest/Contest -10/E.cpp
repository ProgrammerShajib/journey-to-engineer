#include <bits/stdc++.h>
using namespace std;

const int MAX = 100005;
long long pref[MAX];

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

void Prefix() {
    pref[0] = 0;
    for (int i = 1; i < MAX; i++) {
        if (isPalindrome(i)) {
            pref[i] = pref[i - 1] + i;
        } else {
            pref[i] = pref[i - 1];
        }
    }
}

 

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Run precomputation once
    Prefix();

    int t;
    cin >> t;
    while (t--) {
        int l, r;cin>> l >> r;
        cout << pref[r] - pref[l-1] << endl;
         
    }
    return 0;
}