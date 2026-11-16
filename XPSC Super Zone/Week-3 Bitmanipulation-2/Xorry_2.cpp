#include<bits/stdc++.h>
using namespace std;
bool kth_bit_on(int n, int k){
    return ((n>>k)&1);
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>>n;

        int MSB = __lg(n), B = 1<<MSB, A = (n^B), sum = B , cnt = 0;
        for(int k  = 0;k <= MSB;k++){
            if(!kth_bit_on(A,k) && !kth_bit_on(B,k) && (sum +(1<<k) <= n)){
                cnt++;
                sum += (1<<k);
            }
        }

        cout << (1<<cnt)  << "\n";
    }
    return 0;
}