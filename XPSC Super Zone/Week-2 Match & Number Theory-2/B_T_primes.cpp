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

bool isPerfectSquare(ll n){
    ll scq = sqrtl(n);
    return ((scq*scq) == n);
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;cin>> t;
    while(t--){
        ll n;cin>>n;


        if(isPerfectSquare(n) && isPrime(sqrtl(n))){
            cout <<"YES\n";
        }else{
            cout << "NO\n";
        }

    }
    return 0;
}