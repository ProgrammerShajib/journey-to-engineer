#include<bits/stdc++.h>
using namespace std;
 

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    int m_val = 1e9;  
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] < m_val) {
            m_val = A[i];  
        }
    }
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == m_val) {
            cnt++;
        }
    }
    if (cnt >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
  