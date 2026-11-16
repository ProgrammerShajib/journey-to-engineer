#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;

        if (N <= M)
            cout << M - N << '\n';
        else
            cout << (N - M) % 2 << '\n';
    }
}