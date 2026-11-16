#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n,k;cin>>n >>k;
        string s;cin>> s;
        int good = 0, bad = 0, one=0, zero= 0;
        for(int i =0;i<n/2;i++){
            if(s[i] == s[n-i-1]){
                good++;
                if(s[i] == '1') one++;
                else zero++;
            }else{
                bad++;
            }
        }
        if(good == k){
            cout << "YES\n";
        }  
        else if(good< k ){
            int barabo = k - good;
            if(barabo%2 == 0 && barabo <= bad){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }else{
            int komabo = good - k;
            if(komabo%2 == 0 && komabo <= 2*one && komabo <= 2*zero){
                cout << "YES\n";
            }  
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}