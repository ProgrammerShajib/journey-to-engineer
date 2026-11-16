#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;cin>> t;
    while(t--){
        ll n;cin>> n ;
        vector<ll> a(n);
        for(auto &i : a)cin >> i ;
        pbds<ll> p;

        ll ans=0;
        for(ll i = n-1;i>=0;i--){
            ans += p.order_of_key(a[i]);
            p.insert(a[i]);
        }
        cout << ans<< endl;

    }
    return 0;
}