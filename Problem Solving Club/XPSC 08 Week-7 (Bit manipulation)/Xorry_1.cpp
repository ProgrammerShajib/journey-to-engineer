#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        int msb  =  31 - __builtin_clz(x);
        
        int b = (1 << msb);
        int a = x ^ b;
        cout << a << " " << b << endl;
    
    }
    return 0;
}