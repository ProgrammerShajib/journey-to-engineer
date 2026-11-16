#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        ll n;cin>>n;
        vector<ll> a(n);
        ll sum = 0;
        for(auto &i : a)if(cin >> i) sum += i;
        cout << sum - (n -1) << endl;

    }
    return 0;
}