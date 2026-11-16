#include<bits/stdc++.h>
using namespace std;

const int B= 30;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n, K;cin>> n>> K;
        vector<int > v(n);
        for(auto &i : v )cin >> i ;
    

        vector<int > Bits(B+1);
        for(int i = 0;i<n;i++){
            for(int j = B; j>= 0;j--){
                if(( v[i] >> j ) & 1){
                    Bits[j]++;
                }
            }
        }

        long long ans = 0;
        for(int j = B ;j >= 0;j--){
            if(Bits[j] == n){
                ans += (1LL << j);
            }else{
                int need = n - Bits[j];
                if(K>= need){
                    ans += (1LL << j);
                    K -= need;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}