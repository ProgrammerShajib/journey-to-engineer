#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){

        int l , k;cin>> l >> k;
    
        string s ;cin >> s;
    
        
        if(k*2 > l){
            cout << -1 << endl;
            continue;
        }
    
        int flip = 0;
        for(int i = 0 ;i<k;i++){
            if(s[i] == 'L'){
                flip++;
            }
        }
        for(int i = l-k ;i<l;i++){
            if(s[i] == 'R'){
                flip++;
            }
        }
    
        cout << flip << endl;
    }

    return 0;
}