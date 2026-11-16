#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >>m >>x;
        int row =(x + m - 1)/m;
        
        int front =row;
        int back =n - row +1;
        cout << min(front, back) << "\n";
    }

    return 0;
}