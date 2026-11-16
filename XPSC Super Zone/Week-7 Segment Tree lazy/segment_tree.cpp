#include <bits/stdc++.h>
using namespace std;

#define mx 100001
vector<int> arr(mx), tree(mx * 4);

void build(int node, int b, int e) {
    if (b == e) {
        tree[node] = arr[b];
        return;
    }

    int l = 2 * node, r = (2 * node) + 1, mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    tree[node] = tree[l] + tree[r];
}

int query(int node, int b, int e, int i, int j) {
    if (i > e || j < b) {
        return 0;
    }
    
    if (i <= b && e <= j) {
        return tree[node];
    }
    
    int l = 2 * node, r = (2 * node) + 1, mid = (b + e) / 2;
    int l_val = query(l, b, mid, i, j);
    int r_val = query(r, mid + 1, e, i, j);
    return l_val + r_val;
}

void update(int node, int b, int e, int i, int val) {
    if (i < b || i > e) {
        return;
    }

    if (i == b && i == e) {
        tree[node] = val;
        return;
    }

    int l = (node * 2), r = (node * 2) + 1, mid = (b + e) / 2;

    update(l, b, mid, i, val);
    update(r, mid + 1, e, i, val);

    tree[node] = tree[l] + tree[r];
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    if (!(cin >> n)) return 0;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    build(1, 1, n);

    int q;
    cin >> q;
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) { // Type 1: Query (1 i j)
            int i, j;
            cin >> i >> j;
            cout << query(1, 1, n, i, j) << "\n";
        } else if (type == 2) { // Type 2: Update (2 i val)
            int i, val;
            cin >> i >> val;
            update(1, 1, n, i, val);
        }
    }

    return 0;
}