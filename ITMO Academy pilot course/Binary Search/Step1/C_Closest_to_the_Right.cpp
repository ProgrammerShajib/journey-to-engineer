#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n,k;cin>> n >> k;
    vector<int> a(n);
    for(auto &i : a)cin >> i;
    
    while(k--){
        int q;cin>>q;
        int l = -1, r = n;
        
        auto ans = lower_bound(a.begin(), a.end(), q) - a.begin(); 
        while(r-l> 1){
            int mid = l + (r-l)/2;
            if(a[mid]< q){
                l = mid;
            }else{
                r = mid;
            }
        }

        cout << r+1 <<endl;
        cout << ans + 1 <<endl;
    }
    return 0;
}