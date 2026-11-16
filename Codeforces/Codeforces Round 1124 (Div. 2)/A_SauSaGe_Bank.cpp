#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--){
        ll n , k;
        cin>> n >> k;
        ll mx = 1LL<<(n-k+1);
        ll extra = (k-1)*2;
        cout << mx + extra <<endl;
    }
    return 0;
}