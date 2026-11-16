#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int a, b, c;
    cin >> a >> b >> c;

    int cnt= 1;
    while(true){
        int d = c*cnt;
        if(d<=b){
            if(d>=a){
                cout << d;
                break;
            }else{
                cnt++;
            }
        }else{
            cout << -1;
            break;
        }
    }
    return 0;
}