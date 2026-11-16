#include<bits/stdc++.h>
using namespace std;
// l = লেফট ইনডেক্স, r = রাইট ইনডেক্স
int solve(vector<int>& a, int l, int r) {
    // ১. Base case: অ্যারের সাইজ যদি ১ হয় (r - l == 1), 
    // মানে আমরা লিফ নোডে চলে এসেছি। কোনো সোয়াপ লাগবে না।
    if (r - l == 1) return 0;
    
    // ২. অ্যারেকে মাঝখান দিয়ে ভাগ করা
    int mid = (l + r) / 2;
    
    // ৩. DFS কল (লেফট হাফ এবং রাইট হাফের জন্য গভীরে যাওয়া)
    int left_swaps = solve(a, l, mid);
    int right_swaps = solve(a, mid, r);
    
    // ৪. যদি নিচ থেকে -1 আসে (মানে সর্ট করা সম্ভব হয়নি), 
    // তাহলে উপরেও সম্ভব না। সরাসরি -1 রিটার্ন করো।
    if (left_swaps == -1 || right_swaps == -1) return -1;
    
    // ৫. নিচের লেভেলগুলোর সোয়াপ কাউন্ট যোগ করা
    int total_swaps = left_swaps + right_swaps;
    
    // ৬. আসল লজিক: লেফট ভাগের শুরু কি রাইট ভাগের শুরুর চেয়ে বড়?
    // যদি বড় হয়, তার মানে রাইট ভাগটাকে আগে আনতে হবে।
    
    if (a[l] > a[mid]) {
        total_swaps++; // সোয়াপ কাউন্ট ১ বাড়ালাম
        // লেফট আর রাইট ভাগের এলিমেন্টগুলো জায়গা বদল করছি
        for (int i = 0; i < mid - l; i++) {
            swap(a[l + i], a[mid + i]);
        }
    }
    // ৭. ভ্যালিডেশন: জায়গা বদল করার পরেও কি ব্লকটা ঠিকঠাক সর্ট হয়েছে? 
    // যদি কোনো প্যাঁচ থাকে, তাহলে -1 রিটার্ন করো।
    for (int i = l; i < r - 1; i++) {
        if (a[i] > a[i + 1]) return -1;
    }
    // সব ঠিক থাকলে মোট কতগুলো সোয়াপ লাগলো সেটা জানিয়ে দাও
    return total_swaps;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>> n;
        vector<int > a(n);

        for(auto &c : a)cin >> c;
        cout << solve(a, 0, n) << endl;
    }
    return 0;
}