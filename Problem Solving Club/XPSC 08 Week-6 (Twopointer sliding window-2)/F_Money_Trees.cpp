#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        long long n,k;
        cin >>n >>k;
        vector<long long int > a(n), h(n);
        for(auto &i : a)cin >>i;
        for(auto &i : h)cin >>i;

        int l = 0, r = 1, len = 0;
        long long sum = a[0];
        if(sum <=k) len = 1;

        while(r<n){
            if(h[r-1] % h[r] == 0){
                sum += a[r];
            }else{
                l = r;
                sum = a[r];
                if(sum <= k) len = max(len, 1);
                r++ ;
                continue;
            }
            while(l<=r && sum > k){
                sum -= a[l];
                l++;
            }
            len = max(len, r-l+1);
            r++;
        }
        cout << len << endl;
    }
    return 0;
}