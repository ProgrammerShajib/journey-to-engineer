#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n+2);
        v[0] = 1000;
        v[n+1] = -1;
        for(int i = 1;i<=n;i++){
            int a ;
            cin >> v[i];
        }

        int res = 0;
        for(int i = 1;i<=n;i++){
            int l= i;
            int l_cnt = 0;
            int r_cnt = 0;

            for(int l = i;l>0;l--){
                if(v[i]> v[l-1]){
                    l_cnt++;
                }
            }
            for(int j = i;j<=n;j++){             

                if(v[i] < v[j]){
                    r_cnt++;
                }

            }

            if(l_cnt == r_cnt){
                res++;
            }
            // cout <<l_cnt <<" " << r_cnt <<"\n";
        }

        cout << res <<"\n";
    }
    return 0;
}