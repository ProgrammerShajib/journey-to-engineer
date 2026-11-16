#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int a, b;
        cin>> a >>b;
        string s ; cin >> s ;

        int swipe = 0;
        bool flag = 0;
        for(int i = 0;i<a;++i){
            
            if(s[i] == '0'){
                swipe--;
                
            }else{
                swipe = b;
            }

            if(swipe < 0){
                flag = 1;
            }
        }

        if(flag == 0){
            cout  <<  "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}