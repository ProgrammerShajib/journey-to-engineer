#include<bits/stdc++.h>
using namespace std;


const int maxN = 1e5+9 , inf = 2e9;
int n , h[maxN], dp[maxN];

int frog(int i){

    if(i == n) return 0;

    int ans = inf;  
    if(dp[i] != -1) return dp[i];
    if(i+1 <= n){
        ans = min(abs(h[i] - h[i+1]) + frog(i+1), ans);
    }
    if(i+2 <= n){
        ans = min(abs(h[i] - h[i+2]) + frog(i+2), ans);
    }
    return dp[i] =  ans ;
}



int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    cin >> n ;
    for(int i = 1;i<=n;i++){
        cin>> h[i];
    }


    dp[1] = 0;
    dp[2] = abs(h[1] - h[2]);

    for(int i = 3;i<= n;i++){ 
        dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
    }

    for( int i = 1;i<=n;i++) cout << dp[i] <<" ";
    cout << endl << dp[n] ;
    // cout << frog(1) << endl;
    return 0;
}

