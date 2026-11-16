#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n;cin>> n;
        map<int, int> mp;
        ll total = 0;
        for(int i = 0;i<n;i++){
            int a;cin>> a;
            mp[a]++;
            total += a;
        }
        int mx_freq = -1;
        ll mx = -1;
        for(auto [x,y]: mp){
            if(y > mx_freq){
                mx_freq = y;
                mx = x;
            }
        }
        ll remain = n - mx_freq;
        ll remain_sum = total - (mx_freq * mx);
        if(remain >= mx_freq - 1){
            cout << total << "\n";
        }else{
            cout << remain_sum + (remain + 2) * mx << "\n";
        }
    }
    return 0;
}