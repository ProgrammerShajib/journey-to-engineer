#include<bits/stdc++.h>
using namespace std;
int solve(int i , vector<int> &a, int sum1, int sum2, int n){

    if(i== n){
        return abs(sum1 - sum2);
    }
    int take = solve(i+1, a, sum1+a[i],sum2 , n );
    int not_take = solve(i+1, a, sum1,sum2+a[i] , n );

    return min(take, not_take) ;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i : a)cin >> i;
    cout << solve(0,a,0,0,n);
    return 0;
}