#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9;
const int MOD = 1e9 + 7;

long long t[4 * maxN], lazy[4 * maxN];

void push(int n, int b, int e) {
    if (lazy[n] == 1) return; // 1 is the identity value for multiplication
    
    // Apply lazy multiplier to current segment sum
    t[n] = (t[n] * lazy[n]) % MOD;
    
    if (b != e) {
        int l = 2 * n, r = 2 * n + 1;
        lazy[l] = (lazy[l] * lazy[n]) % MOD;
        lazy[r] = (lazy[r] * lazy[n]) % MOD;
    }
    
    lazy[n] = 1; // Reset lazy state to neutral value (1)
}

void build(int n, int b, int e) {
    lazy[n] = 1; // Default multiplier for lazy propagation
    if (b == e) {
        t[n] = 1; // Array is initially filled with ones
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = (t[l] + t[r]) % MOD;
}

void update(int n, int b, int e, int i, int j, long long v) {
    push(n, b, e);
    if (e < i || j < b) return;
    
    if (b >= i && e <= j) {
        lazy[n] = (lazy[n] * v) % MOD;
        push(n, b, e);
        return;
    }
    
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
    t[n] = (t[l] + t[r]) % MOD;
}

long long query(int n, int b, int e, int i, int j) {
    push(n, b, e);
    if (e < i || j < b) {
        return 0;
    }
    if (b >= i && e <= j) {
        return t[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return (query(l, b, mid, i, j) + query(r, mid + 1, e, i, j)) % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    build(1, 1, n);

    while (m--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            long long v;
            cin >> l >> r >> v;
            // 0-based range [l, r-1] converts to 1-based [l+1, r]
            if (l < r) {
                update(1, 1, n, l + 1, r, v);
            }
        } else {
            int l, r;
            cin >> l >> r;
            // Range Sum Query for [l+1, r]
            if (l < r) {
                cout << query(1, 1, n, l + 1, r) << '\n';
            } else {
                cout << 0 << '\n';
            }
        }
    }

    return 0;
}