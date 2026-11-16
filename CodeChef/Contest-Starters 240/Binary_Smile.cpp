#include<bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    string A, B;
    cin >> A >> B;

    if(A == B){
        cout << 0 << "\n";
    }else{
        vector<int> id_A, id_B;
        for (int i = 0; i < N; i++) {
            if (A[i] == '1') id_A.push_back(i);
            if (B[i] == '1') id_B.push_back(i);
        }
        if (id_A.size() != id_B.size()) {
            cout << -1 << "\n";
            return;
        }
    
        int cnt = 0;
     
        for (int i = 0; i < id_A.size(); i++) {
            if (id_A[i] != id_B[i]) {
                cnt++;
            }
        }
    
        if(cnt > 0){
            cout << cnt <<"\n";
        }
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