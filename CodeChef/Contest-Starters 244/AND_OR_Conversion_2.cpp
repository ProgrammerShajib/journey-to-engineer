#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAXN = 200005;

long long fact[MAXN];
long long invFact[MAXN];

// মডুলার এক্সপোনেনসিয়েশন (Inverse Modulo বের করার জন্য)
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// মডুলার ইনভার্স বের করার ফাংশন
long long modInverse(long long n) {
    return power(n, MOD - 2);
}

// ফ্যাক্টরিয়াল প্রিকম্পিউট করার ফাংশন
void precompute() {
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[MAXN - 1] = modInverse(fact[MAXN - 1]);
    for (int i = MAXN - 2; i >= 1; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

// nCr বের করার ফাংশন
long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

void solve() {
    int n;
    cin >> n;
    string a;
    cin >> a;

    // স্ট্রিং A এর মোট ব্লকের সংখ্যা (K) গণনা করা
    int K = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            K++;
        }
    }

    long long total_strings = 0;

    // কেস ১: B[0] == A[0] (এখানে r চলবে 0 থেকে K-1 পর্যন্ত)
    for (int r = 0; r <= K - 1; r++) {
        total_strings = (total_strings + nCr(n - 1, r)) % MOD;
    }

    // কেস ২: B[0] != A[0] (এখানে r চলবে 0 থেকে K-2 পর্যন্ত)
    for (int r = 0; r <= K - 2; r++) {
        total_strings = (total_strings + nCr(n - 1, r)) % MOD;
    }

    cout << total_strings << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // রানটাইম অপ্টিমাইজেশনের জন্য শুরুতেই ফ্যাক্টরিয়াল টেবিল তৈরি করে নেওয়া
    precompute();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}