#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    
    // যদি 0 শুধুমাত্র ১ বার থাকে, তবে শর্ত পূরণ করা অসম্ভব
    if (freq[0] == 1) {
        cout << "NO\n";
        return;
    }
    
    cout << "YES\n";
    
    // k বের করা (সবচেয়ে ছোট সংখ্যা যা ২ বারের কম এসেছে)
    int k = 0;
    while (freq[k] >= 2) {
        k++;
    }
    
    map<int, int> seen;
    string ans = "";
    
    // উপাদানগুলোকে A, B, এবং C তে ভাগ করা
    for (int i = 0; i < n; i++) {
        if (a[i] < k) {
            seen[a[i]]++;
            if (seen[a[i]] == 1) {
                ans += 'A';
            } else if (seen[a[i]] == 2) {
                ans += 'B';
            } else {
                ans += 'A'; // অতিরিক্তগুলো A তে দিয়ে দিলাম
            }
        } else {
            // k বা তার চেয়ে বড় সব কিছু C তে যাবে
            ans += 'C';
        }
    }
    
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