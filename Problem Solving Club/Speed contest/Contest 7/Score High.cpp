#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n;cin>> n;
        int mx = 0;
        for(int i = 0;i<4;i++){
            int a;cin>> a;
            mx = max(mx,a);
        }
        cout << mx << endl;
    }
    return 0;
}