#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--){
        long long a, b;
    cin >> a >> b;
    if (a == b) {
        cout << a << "\n";
    } 
    else if (b < a) {
        if ((a - b) % 2 == 0) {
            cout << a << "\n";
        } else {
            cout << a + 1 << "\n";
        }
    }else {  
        if ((b - a) == 1) {
            cout << a + 1 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    }
    return 0;
}