#include<bits/stdc++.h>
using namespace std;

long long int dp[35];
long long int fibonacci(long long int n){
    if(n<=1){
        return n;
    }
    if(n == 2){
        return 1;
    }
    if(n == 3){
        return 2;
    }
    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = fibonacci(n-1) + fibonacci(n-2)+fibonacci(n-3)+fibonacci(n-4);
    return dp[n];   
}

int main(){

    memset(dp,-1, sizeof(dp));
    long long int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}