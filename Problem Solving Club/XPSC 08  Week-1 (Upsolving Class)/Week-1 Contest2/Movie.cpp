#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin >> n;
    while(n--){
        int M,P,M1, P1,C;
        cin >> M >> P >> M1 >> P1>>C;
        if( M > 0 && P > 0){
            if(M > P){
                cout << (P*C) + (M - P)* M1 <<"\n";
            }else if (P> M){
                cout << (M*C) + (P - M) * P1 <<"\n";
            }else if( M == P){
                cout << M*C << "\n";
            }
        }else{
            if(M > P){
                cout << M* M1 <<"\n";
            }else{
                cout << P* P1 <<"\n";

            }
        }
    }
    return 0;
}