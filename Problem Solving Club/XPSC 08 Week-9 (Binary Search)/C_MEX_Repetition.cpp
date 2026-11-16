#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n, k;cin>>n >> k;

    vector<int> a(n);
    vector<bool > v(n+1, false);
    for(int i = 0 ;i<n;i++){
        int d;
        cin>> d;
        a[i] = d;
        v[d] = true;
    }
    

    int missing = -1;
    for(int i = 0;i<n+1;i++){
        if(!v[i]){
            missing = i;
            break;
        }
    }

    vector<int> extend = a;
    extend.push_back(missing);
    int total = n+1;
    int shift = k%total;
    for(int i = 0;i<n;i++){
        int id = (i - shift + total )%total;
        cout << extend[id] << (i == n - 1 ? "" : " ");

    }

    cout <<"\n";


}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        solve();
    }
    return 0;
}