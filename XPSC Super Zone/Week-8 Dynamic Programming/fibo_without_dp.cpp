#include<bits/stdc++.h>
using namespace std;

int fibo(int n){

    if(n<= 1){
        return n;
    }

    return fibo(n-1) + fibo(n-2);

}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int ans = fibo(n);
    cout << ans << endl;
    return 0;
}