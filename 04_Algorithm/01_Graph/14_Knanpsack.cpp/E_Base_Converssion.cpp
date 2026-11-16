#include<bits/stdc++.h>
using namespace std;

vector<int> ar;

void recursion(int n) { // Changed to void because you aren't using the return value
    if (n == 0) return; // Standard base case for digit extraction

    recursion(n / 2);
    ar.push_back(n % 2);
}

int main() {
    int t;
    if (!(cin >> t)) return 0; 
    
    while (t--) {
        int num;
        cin >> num;
        
        if (num == 0) ar.push_back(0);  
        else recursion(num);

        int sz = ar.size();
        for (int i = 0; i < sz-1; i++) {
            cout << ar[i];
        }
        cout << ar[sz-1];
        
        ar.clear(); 
        cout << endl;
    }
    return 0;
}