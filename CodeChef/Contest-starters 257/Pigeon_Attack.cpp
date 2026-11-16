#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        int time = N + (N - 1) / (K - 1);
        cout << time << "\n";
    }
    
    return 0;
}