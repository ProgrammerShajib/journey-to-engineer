#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll n, q;cin>> n >> q;
    vector<ll> a(n+2), d(n+2);
    for(ll i = 1;i<=n;i++){
        cin>> a[i];
    }
    for(ll i = 0;i<q;i++){
        ll x,y;
        cin>> x >>y;
        d[x]++;
        d[y+1]--;
    }
    for(ll i = 1;i<=n+1;i++){
        d[i] = d[i-1]+d[i];
    }

    sort(a.rbegin(), a.rend() );
    sort(d.rbegin(), d.rend());

    ll sum = 0;
    for(ll i = 0;i<n;i++){
        sum += a[i]*d[i];
    }

    cout << sum ;

    return 0;
}