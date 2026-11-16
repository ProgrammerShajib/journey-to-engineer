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

// সেগমেন্ট ট্রি সুন্দর করে প্রিন্ট করার ফাংশন
void printTree(int node, int b, int e, int space = 0) {
    if (b > e) return;

    // ট্রি আকৃতিতে দেখানোর জন্য স্পেস প্রিন্ট করা
    for (int i = 0; i < space; i++) cout << "   ";

    cout << "Node " << node << " [" << b << "-" << e << "] = " << tree[node] << "\n";

    if (b == e) return; // Leaf Node এ পৌঁছালে থামবে

    int l = 2 * node, r = (2 * node) + 1, mid = (b + e) / 2;
    printTree(l, b, mid, space + 1);
    printTree(r, mid + 1, e, space + 1);
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n = 4;
    arr[1] = 1; arr[2] = 3; arr[3] = 5; arr[4] = 7;

    build(1, 1, n);

    cout << "--- Segment Tree Structure ---\n";
    printTree(1, 1, n);

    return 0;
}