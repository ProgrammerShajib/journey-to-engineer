#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    int a =1;
    while (T--) {
        string S, X;
        cin >> S >> X;

        string result = "";
        int n = S.size();
        
        int m = X.size();
        // cout << n  << " " << m << endl;
        for (int i = 0; i < n; ) {

            bool match = true;

            // Check if S[i..i+m-1] == X
            if (i + m <= n) {
                for (int j = 0; j < m; j++) {
                    if (S[i + j] != X[j]) {
                        match = false;
                        break;
                    }
                }
            } else {
                match = false;
            }

            if (match) {
                // Add '#'
                result += "#";   // <-- using += instead of push_back
                i += m;          // skip the matched substring
            } else {
                // Add one character
                result += S[i];  // <-- using += instead of push_back
                i++;
            }
        }

        cout << result;
        if (T) cout << "\n";
    }

    return 0;
}
