#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, l;
        cin >> n >> l;

        vector<char> s1;
        map<char, bool> mp;
        for(int i = 0; i < n; i++) {
            char c;
            cin >> c;
            s1.push_back(c);
        }
        for(int i = 0; i < l; i++) {
            char c;
            cin >> c;
            mp[c] = true;
        }
        int ans = 0; 
        int left_cnt = 0;   
        int right_cnt = 0;  
        for(int i = 0; i < n; i++) {
            if(mp[s1[i]] == true) { 
          
                left_cnt++;     
                right_cnt = 0; 
            } 
            else { 
                right_cnt++;      
                left_cnt = 0;     
            }
            ans = max(ans, max(left_cnt, right_cnt));
        }
        cout << ans << endl;
    }

    return 0;
}