#include <iostream>
#include <vector>

using namespace std;
void brute_force_solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    while (v1.size() > 1) {
        vector<int> v2;  
        
        for (int i = 0; i < v1.size() - 1; i++) {
            v2.push_back(v1[i] ^ v1[i + 1]);
        }
        v1 = v2; 
    }

    
    cout << v1[0] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        brute_force_solve();
    }
    return 0;
}