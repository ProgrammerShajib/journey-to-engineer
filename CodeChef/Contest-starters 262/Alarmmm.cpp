#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int  count = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '1'){
                count++;
                int p= min(n-1, i+k);
                i = p;
            }
        }

        cout << count << "\n";
    }
    return 0;
}