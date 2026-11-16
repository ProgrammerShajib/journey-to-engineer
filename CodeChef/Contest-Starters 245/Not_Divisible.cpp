#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // pair এর প্রথম উপাদান A[i] এর মান, দ্বিতীয় উপাদান তার আসল ইনডেক্স
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    
    // A কে ছোট থেকে বড় ক্রমে সর্ট করি
    sort(a.begin(), a.end());
    
    // P পারমিউটেশনটি ১ থেকে N পর্যন্ত ক্রমান্বয়ে সাজাই
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
    }
    
    // যোগফল N + 1 হচ্ছে কিনা চেক করি
    int problem_index = -1;
    for (int i = 0; i < n; i++) {
        if (a[i].first + p[i] == n + 1) {
            problem_index = i;
            break; // সর্বোচ্চ একটি ইনডেক্সেই সমস্যা হতে পারে
        }
    }
    
    // যদি সমস্যা পাওয়া যায়
    if (problem_index != -1) {
        if (problem_index < n - 1) {
            // পরবর্তী উপাদানের সাথে Swap করি
            swap(p[problem_index], p[problem_index + 1]);
        } else {
            // যদি শেষ উপাদানে সমস্যা হয়, তার মানে সমাধান অসম্ভব
            cout << -1 << "\n";
            return;
        }
    }
    
    // আসল ইনডেক্স অনুযায়ী উত্তর সাজানোর জন্য ans অ্যারে
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[a[i].second] = p[i];
    }
    
    // আউটপুট প্রিন্ট
    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
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