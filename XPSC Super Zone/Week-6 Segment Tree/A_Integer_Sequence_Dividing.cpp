#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll n;cin>> n;
    ll a = (n*(n+1))/2;
    if(a%2 == 0){
        cout << 0 <<"\n";
    }else{
        cout << 1 <<"\n";
    }
    return 0;
}