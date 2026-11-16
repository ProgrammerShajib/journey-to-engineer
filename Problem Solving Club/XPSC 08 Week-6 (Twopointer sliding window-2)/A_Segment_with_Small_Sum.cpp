#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    long long k;
    cin >> n >> k;
    vector<int> v(n+1);
    for(int i = 1;i<=n;i++){
        cin >> v[i];
    }
    int l=1,r=1;
    long long sum = 0;
    int ans = 0;
    while(r<=n){
        sum += v[r-l+1];
        if(sum <= k){
            ans = max(ans, r-l+1);
        }else{
            sum -= v[l];
            l++;
        }
        r++;
    }

    cout << ans ;
     
    return 0;
}