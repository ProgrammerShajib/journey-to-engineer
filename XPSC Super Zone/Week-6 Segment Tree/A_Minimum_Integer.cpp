#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--){
        int  l , r, d;
        cin>> l >> r >> d;

        if(d>=l && d <=r){
            int a = r%d;
            if(a == 0){
                cout << r+d <<endl;
            }else{
                cout << r + (d-a) << endl;
            }
        }else if(d<l || d > r){
            cout << d << endl;
        }
    }
    return 0;
}