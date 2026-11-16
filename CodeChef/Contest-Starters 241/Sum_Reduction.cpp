#include<bits/stdc++.h>
using namespace std;
void solve() {
    int N;
    cin >> N;
    vector<long long> A(N);
    long long total_sum = 0;
    long long total_or = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        total_sum += A[i];       
        total_or |= A[i];       
    }
    if (total_sum == total_or) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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