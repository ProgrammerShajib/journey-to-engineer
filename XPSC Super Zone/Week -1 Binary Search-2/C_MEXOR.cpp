#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int target = (n ^ k);
        vector<int> ans;
        int bt = 1;
        map<int, int> used;
        while(bt <= target) {
            if((bt & target) > 0) {
                // on ase 
                ans.push_back(bt);
                used[bt]++;
            }
            // bt = (bt << 1);
            bt *= 2;
        }
        // cout << target << endl;
        // for(auto i: ans ) cout << i << ' '; cout << endl;
        int flag = 0;
        for(auto i: ans) {
            if(i >= n) {
                flag = 1;
            }
        }
        if(flag == 1) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            for(int i=1;i<n;++i) {
                if(used[i] > 0) {
                    continue;
                }
                cout << i << ' ';
            }
            cout << 0 << ' ';
            for(auto i: ans ) cout << i << ' '; 
            cout << endl;
        }
    }
}