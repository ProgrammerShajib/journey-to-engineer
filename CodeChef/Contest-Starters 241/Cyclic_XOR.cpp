#include <iostream>
#include <algorithm>

using namespace std;

const int MOD = 998244353;

// Fast exponentiation to calculate (base^exp) % MOD
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

// Function to find GCD of two numbers
long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    long long N, K;
    cin >> N >> K;
    
    // 2^K এর মান বের করা
    long long two_to_K = 1LL << K;
    
    // G = gcd(N, 2^K)
    long long G = gcd(N, two_to_K);
    
    long long free_bits = 0;
    
    // শর্ত পরীক্ষা: যদি N / G জোড় সংখ্যা হয়
    if ((N / G) % 2 == 0) {
        free_bits = 0;
    } else {
        free_bits = G;
    }
    
    // মোট উপায়ের সংখ্যা = 2^(K * free_bits) % MOD
    // ওভারফ্লো এড়াতে এক্সপোনেন্টকে (MOD - 1) দিয়ে মডুলাস করা যেতে পারে (Fermat's Little Theorem)
    long long total_exponent = (K * free_bits) % (MOD - 1);
    long long ans = power(2, total_exponent);
    
    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    }
    return 0;
}