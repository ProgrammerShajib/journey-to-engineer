#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;cin >> t;
    while(t--){
        int l ;cin>> l;
        // cout << l;
        if(l>3){
            
            for(int i =4;i<=l;i++){
                cout << "0";
            }
        }
        cout << "010";
        cout << endl;
    }
    
    return 0;
}