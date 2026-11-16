#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int N;
    cin >> N;
    
    vector<long long> A(N);
    vector<long long> P(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        P[i] = A[i] + (i > 0 ? P[i - 1] : 0);
    }

    if(P[N-1] >= 0){
        
     cout << "YES\n" ;
     return ;
    }    


    bool ans = true;
    for (int i = 0; i < N; i++) {
        if(P[i] >= 0 && (P[N-1] - P[i] - A[i] ) > 0){
            continue;
        }else{
            ans = false;
            break;
        }
    }

    if(ans){
        cout <<"YES\n";
    }else{
        cout <<"NO\n";
    }
    return ;
    
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}