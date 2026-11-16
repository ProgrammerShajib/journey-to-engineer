#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<"\n"
#define no cout << "NO" << "\n"

void solve(){
    int n;cin>> n;
    bool sixtyseven = false;
    for(int i = 0;i<n;i++){
        int a ;cin>> a;
        if( a == 67) sixtyseven = true;
    }

    if(sixtyseven) yes;
    else no;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        solve();
    }
    return 0;
}