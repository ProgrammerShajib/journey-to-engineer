#include<bits/stdc++.h>
using namespace std;

vector<int>dp(50,-1);
int fibo(int n){

     if(n == 0) return 0;
     if(n == 1) return 1;
    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] =  fibo(n-1) + fibo(n-2);
    return dp[n];

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