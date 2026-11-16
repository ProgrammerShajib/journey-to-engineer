#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        vector<string> v;
        string temp = "";
        temp += s[0];
        
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                temp += s[i]; 
            } else {
                v.push_back(temp); 
                temp = "";
                temp +=s[i];
            }
        }
        v.push_back(temp);
        if (v.size() == 1) {
            cout << s << "\n";
        } 
        else {
            string ans = v[0] + v[1];
            for (int i = 1; i < v.size() - 1; i++) {
                if (v[i] + v[i + 1] < ans) {
                    ans = v[i] + v[i + 1];
                }
            }
            cout << ans << "\n";
        }
    }
}