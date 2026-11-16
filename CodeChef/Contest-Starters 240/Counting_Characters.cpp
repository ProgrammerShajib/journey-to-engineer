#include<bits/stdc++.h>
using namespace std;
void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int countA = 0;
    int countB = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'a') {
            countA++;
        } else {
            countB++;
        }
    }
    cout << countA << " " << countB << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    }
    
    return 0;
}