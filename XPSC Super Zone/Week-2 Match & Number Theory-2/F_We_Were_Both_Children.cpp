#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>> n;
    vector<int> freq(n+1);
    for(int i = 0;i<n;i++){
        int a ;cin>>a;
        if(a<= n){
            freq[a]++;
        }
    }
    vector<int> cnt(n+1,0);
    for(int i = 1;i<=n;i++){
        if(freq[i] == 0) continue;
        for(int j = i ;j<=n;j+=i){
            cnt[j] += freq[i];
        }
    }

    cout << *max_element(cnt.begin(), cnt.end())  << endl;
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