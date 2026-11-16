#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;
    cin >> n;
    string s;
    cin >> s;
    int L = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            L++;
        }
    }
    int d = 0;
    for (int i =1; i < n - 1;i++) {
        if (s[i]!= s[i - 1] && s[i] != s[i + 1]) {
            if (s[i - 1] == s[i + 1]) {
                d = 2;
                break;
            } else {
                d = 1;
            }
        }
    }
    cout << L - d << "\n";
    }
    return 0;
}