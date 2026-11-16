#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> degree(n + 1, 0);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        degree[u]++;
        degree[v]++;
    }
    
    // লিফ নোড কাউন্ট করা (যেসব নোডের ডিগ্রী ১)
    int leaves = 0;
    for (int i = 1; i <= n; i++) {
        if (degree[i] == 1) {
            leaves++;
        }
    }
    
    // গেম থিওরি ও অপ্টিমাল মুভস অনুযায়ী:
    // বব মোট floor(n/2) টি নোড চুজ করবে।
    // বব floor(leaves/2) টি লিফ নোড সুরক্ষিত করতে পারবে এবং তাদের সাথে কানেক্টেড পাথ সেভ করতে পারবে।
    // অ্যালিস ববের বাকি নোডগুলো ক্যাপচার করে নেবে।
    
    int bob_total_moves = n / 2;
    int bob_protected_leaves = leaves / 2;
    
    // অ্যালিসের রিওয়ার্ড
    int ans = bob_total_moves - bob_protected_leaves;
    if (ans < 0) ans = 0;
    
    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}