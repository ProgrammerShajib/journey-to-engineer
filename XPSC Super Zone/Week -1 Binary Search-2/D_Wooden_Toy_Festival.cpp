#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>> n;
        vector<int> a(n);
        for(auto &i : a)cin >>i;
        sort(a.begin(), a.end());

        auto ok = [&](int mid){
            int cnt = 1, l = 0;
            for(int r = 0; r < n;r++){
                if((a[r] - a[l])> 2 *mid){
                    cnt++;
                    l =r;
                }
            }
            return cnt <= 3;
        };
        int l = 0, r = 1e9, mid, ans = 0;
        while(l<=r){
            mid = l + (r -l)/2;
            if(ok (mid)){
                ans = mid;
                r = mid -1;
            }else{
                l = mid + 1;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}