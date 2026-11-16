#include<bits/stdc++.h>
using namespace std;
 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (cin >> T) {
        while (T--) {
            int N;
            cin >> N;
            string S;
            cin >> S;
            int total = 0;
            int len = 1;
            for (int i = 1; i < N; i++) {
                if (S[i] == S[i-1]) {
                    len++;
                } else {
                    total += len / 3;
                    len = 1; 
                }
            }
            total += len / 3;
            cout << total << "\n";
        }
    }
    return 0;
}