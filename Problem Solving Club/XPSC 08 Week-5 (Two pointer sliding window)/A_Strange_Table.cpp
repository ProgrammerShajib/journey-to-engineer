
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    long long t;
    cin >> t;
    while(t--){
        long long n, m, x ;cin >> n >> m >> x;
        x--;
        long c = x/n; 
        long r = x%n; 
        cout << (r*m) + c + 1 << endl;
    }
    return 0;
}