#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;cin>>t;
    while(t--){
        ll n;cin>> n;
        vector<ll > a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];

        }
        if(n%2 != 0){
            cout << "NO\n";
            continue;
        }
        ll min_odd = 1e9;
        ll mx_even = -1e9;
        for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            min_odd = min(min_odd, a[i]);
        } else {
            mx_even = max(mx_even, a[i]);
        }
    }
    if(min_odd - mx_even >= 2){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    }

    return 0;
}