#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if (n - k == 1) {
        cout << -1 << "\n";
        return;
    }

    int c0 = (n + 1) / 2; 
    int c1 = n / 2;       

    int B = n - k;
    int blocks_0 = (B + 1) / 2;  
    int blocks_1 = B / 2;       

    for (int i = 1; i <= B; i++) {
        if (i == 1) {
            int zeros = c0 - (blocks_0 - 1);
            for (int j = 0; j < zeros; j++) {
                cout << "0";
            }
        } 
        else if (i == 2) {
            int ones = c1 - (blocks_1 - 1);
            for (int j = 0; j < ones; j++) {
                cout << "1";
            }
        } 
        else if (i % 2 != 0) {
            cout << "0";
        } 
        else {
            cout << "1";
        }
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;cin>> t;
    while(t--){
        solve();
    }
    
    return 0;
}