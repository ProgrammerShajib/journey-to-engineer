#include<bits/stdc++.h>
using namespace std;
 vector<int > getRunningSum(vector<int> & nums, int n){
    vector <int> runningsum(n);
    if(n ==0){
        return runningsum ;
    }

    runningsum[0] = nums[0];
    for(int i =1;i<n;i++){
        runningsum[i] = runningsum[i-1] + nums[i];
    }

    return runningsum;
 }
int main(){

    int n;
    cin >> n;
    vector < int > v(n);
    for(int i =0;i<n;i++){
        cin >> v[i];
    }

    vector<int> runningSum =  getRunningSum(v,n);
    for(int i =0;i<n;i++){
        cout << runningSum[i] << " ";
    }
    
    return 0;
}