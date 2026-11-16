#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int dp[1005][1005];

bool subset_sum(int idx, int sum){

    if(idx < 0){
        if(sum == 0) return true;
        else return false;
    }
    if(dp[idx][sum] != -1){
        return dp[idx][sum];
    }

    if(v[idx] <= sum){

        bool op1 = subset_sum(idx - 1, sum - v[idx]);
        bool op2 = subset_sum(idx - 1, sum);
        
        dp[idx][sum] =  op1 || op2;
        return dp[idx][sum];
    }else{
        return subset_sum(idx - 1, sum);
    }
}


int main(){

    int n ;
    cin >> n;
    
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    int sum;
    cin >> sum;
    memset(dp, -1, sizeof(dp));
    bool result = subset_sum(n,sum);

    if(result){
        cout <<"Possible.";
    }else{
        cout << "Not Possible.";
    }
    return 0;
}