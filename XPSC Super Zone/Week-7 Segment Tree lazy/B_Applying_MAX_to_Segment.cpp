#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9;
long long lazy[4 * maxN];

void update(int n, int b, int e, int i, int j, long long v) {
    if (e < i || j < b) {
        return;
    }
    if (b >= i && e <= j) {
        lazy[n] = max(lazy[n], v);
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
}

// Point Query: Root থেকে Leaf-এ নামার সময় রাস্তার সর্বোচ্চ (max) lazy মান রিটার্ন করা
long long query(int n, int b, int e, int idx) {
    if (b == e) {
        return lazy[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    
    if (idx <= mid) {
        return max(lazy[n], query(l, b, mid, idx));
    } else {
        return max(lazy[n], query(r, mid + 1, e, idx));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    while (m--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            long long v;
            cin >> l >> r >> v;
            // 0-based [l, r-1] translates to 1-based [l + 1, r]
            if (l < r) {
                update(1, 1, n, l + 1, r, v);
            }
        } else {
            int i;
            cin >> i;
            cout << query(1, 1, n, i + 1) << '\n';
        }
    }

    return 0;
}