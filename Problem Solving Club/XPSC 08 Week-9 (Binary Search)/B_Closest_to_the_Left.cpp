#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n, k;cin>> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i ;

    while(k--){
        int l = 0, r = n - 1, mid , key ;
        cin >> key ;

        
        if(key < a[0]){
            cout << 0 << endl;
        }else{

            int ans;

            while(l <= r){
    
                mid = (l+r) / 2;
                if(key >= a[mid]){
                    ans = mid;
                    l = mid+1;
                    // break;
                } else{
                    r = mid-1;
                }
                
            }

            cout << ans+1 << endl;
        }
    }
    return 0;
}