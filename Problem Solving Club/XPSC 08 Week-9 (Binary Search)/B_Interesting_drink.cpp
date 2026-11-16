#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;cin>> n;
    vector<int > shops(n);
    for(auto &i : shops) cin >> i ;
    sort(shops.begin(), shops.end());
 
    int q;cin >> q;
    while(q--){
        int k;cin>>k;

        int l = 0, r = n -1, mid , ans =-1 ;
        while(l <= r){
            mid = (l+r) /2;

            if(shops[mid] <= k){
                ans = mid;
                l = mid+1;
                // cout << ans << " ";
            }else{
                r = mid - 1;
            }
        }

        if(ans == -1){
            cout << 0 << endl;
        }else{
            cout << ans+1 << endl;
        }

    }
    return 0;
}