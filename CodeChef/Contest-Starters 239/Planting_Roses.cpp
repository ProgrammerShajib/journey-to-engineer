#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

// হেল্পার ফাংশন: 'target_flowers' সংখ্যক ফুল নিয়মানুযায়ী বসানো সম্ভব কি না
bool isValid(long long target_flowers, const vector<long long>& a, int n, long long m, long long k) {
    long long rem_flowers = target_flowers;
    
    for (int i = 0; i < n; i++) {
        if (rem_flowers <= 0) break; // সব ফুল বসানো শেষ হলে লুপ থেকে বের হয়ে যাবো
        
        // বর্তমান রঙ থেকে সর্বোচ্চ কতটুকু নিতে পারবো
        long long take = min(a[i], rem_flowers);
        
        if (take > 0) {
            // 'take' সংখ্যক ফুল বসাতে ওই রঙের ব্লকে কয়টি টব লাগবে (The Core Formula)
            long long required_pots = take + (take - 1) / k;
            
            // টব কম পড়ে গেলে এই টার্গেটটি অসম্ভব
            if (m < required_pots) {
                return false;
            }
            
            m -= required_pots;
            rem_flowers -= take;
            
            // যদি এখনো ফুল বাকি থাকে এবং পরবর্তী রঙে যেতে চাই, 
            // তবে বাধ্যতামূলক ১টি খালি টব (Color Switch Gap) লাগবে
            if (rem_flowers > 0) {
                if (m <= 0) return false; // পরবর্তী রঙের জন্য গ্যাপ দেওয়ার টব নেই
                m--; 
            }
        }
    }
    
    // সব ফুল সফলভাবে বসানো গেলে rem_flowers ০ হবে
    return rem_flowers == 0;
}

void solve() {
    int n;
    long long m, k;
    if (!(cin >> n >> m >> k)) return;
    
    vector<long long> a(n);
    long long total_available_flowers = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_available_flowers += a[i];
    }
    
    // বাইনারি সার্চ রেঞ্জ নির্ধারণ
    long long low = 0;
    // আমরা সর্বোচ্চ মোট ফুল অথবা টবের সংখ্যা—যেটি ছোট, ততটুকুই সার্চ করবো
    long long high = min(m, total_available_flowers); 
    long long ans = 0;
    
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        
        if (isValid(mid, a, n, m, k)) {
            ans = mid;       // 'mid' সংখ্যক ফুল বসানো সম্ভব, তাই উত্তর সেভ করলাম
            low = mid + 1;   // আরও বেশি ফুল বসানো যায় কি না তা দেখার জন্য ডানে গেলাম
        } else {
            high = mid - 1;  // ফুল বেশি হয়ে গেছে, তাই সংখ্যা কমাতে বামে আসলাম
        }
    }
    
    cout << ans << "\n";
}

int main() {
    // Fast I/O এর জন্য
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}