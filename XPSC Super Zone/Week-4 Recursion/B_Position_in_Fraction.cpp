#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int a,b,c;
    cin>> a >> b >> c ;

    int pos = -1;
    for(int i = 1;i<=b;i++){
        a = a*10;
        int d = a/b;
        a = a%b;
        if(d == c){
            pos = i;
            break;
        }
    }

    cout << pos ;
    return 0;
}