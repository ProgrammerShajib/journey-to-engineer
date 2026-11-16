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
            vector<int> A(N);
            int total_sum = 0;
            for (int i = 0; i < N; i++) {
                cin >> A[i];
                total_sum += A[i];
            }
            bool possible = false;
            for (int i = 0; i < N; i++) {
                if ((total_sum - A[i]) % 2 == 0) {
                    possible = true;
                    break;
                }
            }
            if (possible) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}