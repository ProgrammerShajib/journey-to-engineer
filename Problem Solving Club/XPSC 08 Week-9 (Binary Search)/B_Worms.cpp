#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    long long n;cin>>n;
    vector<long long> pile(n);
    for(auto &i : pile)cin >> i ;
    vector<long long > pref(n,0);
    pref[0] = pile[0];

    for(long long i = 1;i<n;i++){
        pref[i] = pref[i-1] + pile[i];
    }

 
    long long q;cin>>q;

    while(q--){
        long long k;cin>>k;
        // cout << a  << endl;

        long long l= 0, r = n-1, mid , ans =-1 ;

        while(l <= r){
            
            mid = (l+r)/2;
            if(k <= pref[mid] ){
                ans = mid;
                r = mid-1;

                // cout << ans << " " << pref[mid] << endl;

            }else{
                l = mid+1;
            }
        }

        cout << ans+1 << endl;
    }
    return 0;
}