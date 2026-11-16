#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPrime(ll n){

    if(n==1) return false;
    for(int i = 2;i*i <= n;i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    // cout << isPrime(t);
    for(int i = 2 ;i*i <= t;i++){
        // cout << i <<endl;
        if(t%i == 0){
            cout << i << endl;
        }
    }
    
    return 0;
}