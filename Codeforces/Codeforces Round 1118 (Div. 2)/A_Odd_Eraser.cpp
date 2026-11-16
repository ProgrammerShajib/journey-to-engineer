#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>> n;
        vector<int> a(n);
        for(auto &i : a)cin >> i;

        int r = __gcd(a[0], a[n-1]);
        cout << r <<"\n";
    }
    return 0;
}