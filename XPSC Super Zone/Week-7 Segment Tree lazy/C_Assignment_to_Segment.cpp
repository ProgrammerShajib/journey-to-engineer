#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9;
long long lazy[4 * maxN];

// Clear/push lazy values down to children
void push(int n, int b, int e) {
    if (lazy[n] == -1) return; // -1 denotes no pending assignment
    
    if (b != e) {
        int l = 2 * n, r = 2 * n + 1;
        lazy[l] = lazy[n]; // Overwrite with parent's assignment
        lazy[r] = lazy[n];
        lazy[n] = -1;      // Reset parent's pending state
    }
}

// Build tree: Initially all array elements are 0
void build(int n, int b, int e) {
    lazy[n] = -1; // Default: No lazy tag for segment
    if (b == e) {
        lazy[n] = 0; // Leaf nodes initially hold the value 0
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
}

void update(int n, int b, int e, int i, int j, long long v) {
    push(n, b, e);
    if (e < i || j < b) return;
    
    if (b >= i && e <= j) {
        lazy[n] = v; // Direct assignment
        push(n, b, e);
        return;
    }
    
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
}

long long query(int n, int b, int e, int idx) {
    push(n, b, e);
    if (b == e) {
        return lazy[n];
    }
    
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    if (idx <= mid) {
        return query(l, b, mid, idx);
    } else {
        return query(r, mid + 1, e, idx);
    }
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
            // 0-based range [l, r-1] translates to 1-based range [l+1, r]
            if (l < r) {
                update(1, 1, n, l + 1, r, v);
            }
        } else {
            int idx;
            cin >> idx;
            cout << query(1, 1, n, idx + 1) << '\n';
        }
    }

    return 0;
}