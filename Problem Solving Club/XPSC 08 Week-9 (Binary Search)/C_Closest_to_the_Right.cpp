#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    while(k--){
        int key , l = 0, r = n-1, mid;
        cin >> key ;

        if(key > a[r]){
            cout << n+1 << endl;
        }else{
            int ans ;
            while(l <= r){
    
                mid = (r+l)/2;
                
                if(key <= a[mid]){
                    ans = mid;
                    r = mid-1;
                }else{
                    l = mid+1;
                }
            }

            cout << ans+1  << endl;
        }
        
    }
    return 0;
}