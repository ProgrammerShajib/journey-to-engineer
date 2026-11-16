#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    long long s;
    cin>> n >> s;
    vector<int> v(n);
    for(auto &i : v)cin >> i ;
    
    int l= 0, r= 0;
    long long ans = 0, sum = 0;
    while(r<n){
        sum += v[r];
        if(sum <= s){
            ans += r-l+1;
        }else{
            while(sum > s && l <= r){

                sum -= v[l];
                l++;
            }
            if(sum <= s){
                ans += r -l+1;
            }
        }
        r++;
    }

    cout << ans ;
    return 0;
}