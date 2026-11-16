#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int a, b;cin>> a >>b;
        if(a%4 == 0){
            if(b){
                cout << "On\n";
            }else{
                cout <<"Off\n";
            }
            
        }else{
            
            if(b== 0){
                cout << "On\n";
            }else{
                cout << "Ambiguous\n";
            }
        }
         
    }
    return 0;
}