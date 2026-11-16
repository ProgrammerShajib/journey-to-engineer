#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int odd = 0;
        int f_index = -1;  
        int l_index = -1;    
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num % 2 == 1) {
                odd++;
                if (f_index == -1) f_index = i;
             l_index = i;
            }
        }
        if (odd % 2 == 0) {
            cout << n << "\n";
        } else {
            cout << max( l_index, n - f_index - 1) << "\n";
        }
    }
    return 0;
}