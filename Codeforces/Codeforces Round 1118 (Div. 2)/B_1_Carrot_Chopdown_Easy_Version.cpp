#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n,m;cin>> n >>m;
        vector<int>freq(m+2);
        for(int i = 0;i<n;i++){
            int d;
            cin>> d;
        
            freq[d]++;
        }


        vector<int> suff(m+2,0);
        for(int i = m;i>=1;i--){
            suff[i] = suff[i+1]+ freq[i];
        }

        int ans = 0;
        for(int i = 1;i<=m;i++){
            int crr = suff[i];
            if(i*2 <= m){
                crr += freq[i*2];
            }

            ans = max(crr, ans);

        }

        cout << ans <<"\n";

    }
    return 0;
}