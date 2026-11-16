#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> prime;
void seive(ll n){
    vector<bool> is_prime(n+1, true);

    for(ll i = 2;i<= n;i++){
        if(is_prime[i]){
            prime.push_back(i);
            for(ll j = 2*i;j <= n;j+=i){
                is_prime[j] = false;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    seive(1e7);
    int t;cin>>t;
    while(t--){

        ll d;cin>> d;
        ll x = *lower_bound(prime.begin(), prime.end(),d+1);
        ll y = *lower_bound(prime.begin(), prime.end(),x+d);

        ll n = x*y;
        cout << n <<"\n";
    }

    
    return 0;
}