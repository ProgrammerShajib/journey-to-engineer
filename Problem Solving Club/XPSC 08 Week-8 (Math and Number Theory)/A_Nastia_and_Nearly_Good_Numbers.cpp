#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    long long  t;cin>>t;
    while(t--){
        long long x,y;cin>> x >>y;

        if(y == 1){
            cout << "NO\n";
        }else{
            cout <<"YES\n";
            long long first = x;
            long long second = x*y;
            long long third = first + second;
            cout << first <<" " << second << " " << third << "\n";
        }
    }
    return 0;
}