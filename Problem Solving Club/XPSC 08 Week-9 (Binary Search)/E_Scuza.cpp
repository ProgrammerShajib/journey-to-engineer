#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    long long t;cin>>t;
    while(t--){
        long long a,b;
        cin>> a >> b;
        vector<long long> v(a), level(a,0) , pref(a,0);
        for(auto &i : v )cin  >> i ;
        level[0] = v[0];
        pref[0] = v[0];
        for(long long i = 1;i<a;i++){
            long long mx = max(level[i-1], v[i]);
            level[i] = mx;
            pref[i] = pref[i-1] + v[i];

        }
        while(b--){
            long long l = 0, r = a-1, mid, ans = -1;
            long long q;cin>> q;

            while(l <= r){
                mid = (l+r)/2;
                if(q>= level[mid]){
                    ans = mid;
                    l = mid+1;

                }else{
                    r = mid-1;
                }
            }

            if(ans == -1){
                cout << 0 << " ";
            }else{

                cout << pref[ans] << " ";
            }
            
        } 
        
        cout <<endl;
    }
    return 0;
}