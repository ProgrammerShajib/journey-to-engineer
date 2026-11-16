#include<bits/stdc++.h>
using namespace std;

void search(long long n , long long q , vector<long long> &v){
    long long l = 0, r = n-1 , mid, ans;

    ans = -1;
    while(l<=r){
        mid = (l+r) /2;
        if(v[mid] >= q){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }

    if(ans != -1){

        cout <<  ans+1 << endl;
    }else{
        // cout << ans << endl;
        cout <<  ans << endl;
    }

    

}

void solve(){
    long long n , q;
    cin >> n >> q;
    vector<long long> a(n);
    for(auto &i : a)cin >> i;
    sort(a.begin(), a.end(), greater<>());
    vector<long long> pref(n,0);
    pref[0] = a[0];
    for(long long i= 1;i<n;i++){
        pref[i] = pref[i-1] + a[i];
    }
    // for(auto c : pref) cout << c <<" ";
    // cout << endl;

    while(q--){
        long long k ;
        cin >> k;
        search(n, k, pref);
    }
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    long long n;cin>> n;
    while(n--){
        solve();
        // cout << endl;
    }
    return 0;
}