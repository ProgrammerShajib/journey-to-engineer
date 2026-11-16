#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n+1);
        for(int i = 1;i<=n;i++){
            cin>>v[i];
        }
        ll mx = 0;
        ll curr = 0;
        ll i = 1;
        for(ll j = 2;j<=n;j++){
            if(v[j] >0){
                curr += v[j] -  j +i;
                mx = max(curr, mx);
                i = j;
            }
        }

        cout << mx << endl;


    }
    return 0;
}