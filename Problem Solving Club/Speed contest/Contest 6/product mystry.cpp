#include<bits/stdc++.h>
using namespace std;
long long gcd(long long b, long long c) {
    if (c == 0) {
        return b;
    }
    return gcd(c, b % c);
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long b, c;
        cin >> b >> c;
        long long ans = c / gcd(b, c);
        cout << ans << "\n";
        
    }
    return 0;
}