#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n,m;
    cin >> n >>m;
    if((n*2) <= m){
        cout << n << "\n";
    }else {
        cout << m-n <<"\n";
    }
    return 0;
}