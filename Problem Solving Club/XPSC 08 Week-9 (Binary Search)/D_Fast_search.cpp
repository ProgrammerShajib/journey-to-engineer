#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i : a)cin >> i;
    sort(a.begin(), a.end());

    int k;cin>> k;
    while(k--){
        int l,r;cin>> l >> r;
        auto f = lower_bound(a.begin(), a.end(), l) - a.begin();
        auto g = upper_bound(a.begin(), a.end(), r) - a.begin();
        cout << g - f <<" ";

    }
    return 0;
}