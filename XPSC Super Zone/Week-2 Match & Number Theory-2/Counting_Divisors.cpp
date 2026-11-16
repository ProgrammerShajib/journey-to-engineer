#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int mxn = 1e6 + 5;
    vector<int> divisor(mxn);
 
    for(int i = 1;i<mxn;i++){
        for(int j = i;j < mxn ;j+=i){
            divisor[j]++;
        }
    }
 
    // cout << divisor[5];
    int t;cin>> t;
    while(t--){
        int a;cin>> a;
        cout << divisor[a] << "\n";
    }
    return 0;
}
