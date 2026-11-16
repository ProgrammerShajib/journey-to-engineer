#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int a, b;cin>> a >>b ;
        int d = b/a;
        int f = a*(d+1);
        int k = d*a;
        if(a> b){
            cout << a-b <<endl;
        }else{

            cout << min(abs(f-b),abs(k-b)) << endl;
        }
 
    }
    return 0;
}