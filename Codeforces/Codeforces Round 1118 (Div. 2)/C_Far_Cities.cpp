#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// জাজকে প্রশ্ন করার হেল্পার ফাংশন
int ask(int u, int v, int d) {
    if (d == 0) return 1;
    cout << "? " << u << " " << v << " " << d << endl; // endl দিলে অটোমেটিক flush হয়ে যায়
    
    int response;
    cin >> response;
    if (response == -1) {
        exit(0); // ভুল হলে প্রোগ্রাম সাথে সাথে বন্ধ হবে
    }
    return response;
}

void solve() {
    int n;
    cin >> n;

    // ধাপ ১: নোড ১ থেকে সবচেয়ে দূরের নোড u এবং দূরত্ব d1 বের করা
    int u = 1;
    int d1 = 0;

    for (int i = 2; i <= n; i++) {
        // যতক্ষণ পর্যন্ত নোড i আমাদের বর্তমান দূরত্বের চেয়ে বেশি দূরে
        while (ask(1, i, d1 + 1)) {
            d1++;
            u = i;
        }
    }

    // ধাপ ২: নোড u থেকে সবচেয়ে দূরের নোড v এবং ফাইনাল ডায়ামিটার d বের করা
    int v = 1;
    int d = d1; // ডায়ামিটার কমপক্ষে d1 তো হবেই

    for (int i = 1; i <= n; i++) {
        if (i == u) continue;
        
        while (ask(u, i, d + 1)) {
            d++;
            v = i;
        }
    }

    // ফাইনাল উত্তর প্রিন্ট
    cout << "! " << u << " " << v << " " << d << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}