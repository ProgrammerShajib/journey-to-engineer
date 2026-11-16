#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    // কর্নার কেস: N = 1 এবং N = 2 এর জন্য কোনো বৈধ উত্তর সম্ভব নয়
    if (n <= 2) {
        cout << -1 << "\n";
        return;
    }
    
    // ১ ঘর সাইক্লিক রাইট বা লেফট শিফট করলে উপাদানগুলোর যোগফল প্রাইম হওয়া এড়িয়ে যাওয়া যায়
    // এখানে আমরা ১ ঘর বামে শিফট করে অ্যারে A তৈরি করছি
    for (int i = 0; i < n; i++) {
        cout << p[(i + 1) % n] << " ";
    }
    cout << "\n";
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