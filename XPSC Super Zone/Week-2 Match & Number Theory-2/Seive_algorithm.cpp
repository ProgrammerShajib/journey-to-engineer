#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>> n;
    vector<bool> prime(n+1, true);

    for(ll i = 2; i*i <= n;i++){
        if(prime[i]){
            for(ll j = i*i;j <= n;j += i){
                prime[j] = false;
            }
        }
    }

    ll  cnt = 0;
    for(ll i = 2;i <= n;i++){
        if(prime[i]){
            cout << i <<" ";
            cnt++;
        }
    }

    cout << endl << "Total prime number : " << cnt;
    return 0;
}