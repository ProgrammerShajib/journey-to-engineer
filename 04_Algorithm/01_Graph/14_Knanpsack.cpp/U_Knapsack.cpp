#include<bits/stdc++.h>
using namespace std;

int weight[1005];
int val[1005];
int dp[1005][1005];

int knapsack(int i , int maxweight){

    if(i <0 || maxweight <=0){
        return 0;
    }

    if(weight[i] <= maxweight){

        int op1 = knapsack(i-1, maxweight - weight[i]) + val[i];
        int op2 = knapsack(i -1, maxweight);

        dp[i][maxweight] = max(op1, op2);
        return dp[i][maxweight];
    }else{
        dp[i][maxweight] = knapsack(i -1, maxweight);
        return dp[i][maxweight];
    }
}
int main(){

    int n, maxweight;
    cin >> n >> maxweight;

    for(int i = 0 ;i<n;i++){
        cin >> weight[i] >> val[i];
    }

    memset(dp, -1, sizeof(dp));

    int ans = knapsack(n-1, maxweight);
    cout << ans;

    return 0;
}