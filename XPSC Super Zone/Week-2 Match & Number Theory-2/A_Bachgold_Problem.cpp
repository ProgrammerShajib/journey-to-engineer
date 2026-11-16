#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin>> n;
    int cn = n/2;
    cout << cn <<"\n";
    if(n%2 == 0){
        for(int i = 0;i<cn;i++){
            cout << 2 <<" ";
        }
        
    }else{
        
        for(int i = 0;i<cn-1;i++){
            cout << 2 <<" ";
        }
        cout << 3;
    }
    return 0;
}