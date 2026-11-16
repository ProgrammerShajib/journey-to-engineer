#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    char col = s[0];
    char row = s[1];
    
    for (char r = '1'; r <= '8'; ++r) {
        if (r != row) {
            cout << col << r << "\n";
        }
    }
    
    for (char c = 'a'; c <= 'h'; ++c) {
        if (c != col) {
            cout << c << row << "\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}