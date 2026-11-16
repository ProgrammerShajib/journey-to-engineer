#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> p(n + 1);    // আমাদের মেইন অ্যারে (1-based index)
    vector<int> pos(n + 1);  // কে কোথায় বসে আছে, তার ট্র্যাকার 

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        pos[p[i]] = i; 
    }

    // একটি ছোট টুল/ফাংশন বানিয়ে নিচ্ছি দূরত্ব মাপার জন্য
    auto get_dist = [&](int index) { 
        return abs(index - p[index]); 
    };

    queue<int> q; // যারা Swap করার জন্য রেডি, তাদের ওয়েটিং লিস্ট
    vector<pair<int, int>> ans; // আমরা কোন কোন ইনডেক্স Swap করছি, তার লিস্ট 
    
    // শুরুতে পুরো অ্যারে একবার চেক করছি 
    for (int i = 1; i <= n; i++) {
        if (p[i] != i && get_dist(p[i]) >= get_dist(i)) {
            q.push(i);
        }
    }

    // ওয়েটিং লিস্ট থেকে একেকজনকে ডেকে তাদের জায়গায় পাঠানো
    while (!q.empty()) {
        int u = q.front(); 
        q.pop(); 
        
        if (p[u] == u) continue; // সে আগেই নিজের জায়গায় চলে গেলে বাদ
        
        int v = p[u]; // u এর টার্গেট জায়গা হলো v
        
        // আবার চেক করে নিচ্ছি শর্তটা এখনো ঠিক আছে কি না 
        if (get_dist(v) >= get_dist(u)) {
            
            ans.push_back({u, v}); // Swap করব, তাই খাতায় লিখে রাখলাম 
            
            // Swap করে দিলাম!
            swap(p[u], p[v]);
            pos[p[u]] = u; // পজিশন ট্র্যাকার আপডেট করলাম
            pos[p[v]] = v;

            // ১. u ইনডেক্সে নতুন যে বসল, সে কি এখন শর্ত পূরণ করে?
            if (p[u] != u && get_dist(p[u]) >= get_dist(u)) {
                q.push(u);
            }
            
            // ২. যার আসল জায়গা u (বর্তমানে w ইনডেক্সে আছে), সে হয়তো এখন u-তে আসার সুযোগ পেয়ে গেছে!
            int w = pos[u]; 
            if (w != u && get_dist(p[w]) >= get_dist(w)) {
                q.push(w); 
            }
        }
    }

    // আউটপুট দেওয়া
    cout << ans.size() << "\n";
    for (auto s : ans) {
        cout << s.first << " " << s.second << "\n";
    }
}

int main() {
    // ইনপুট-আউটপুট ফাস্ট করার জন্য
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}