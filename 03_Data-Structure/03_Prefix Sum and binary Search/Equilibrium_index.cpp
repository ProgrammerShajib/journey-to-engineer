#include<bits/stdc++.h>
using namespace std;

vector<int> getRunningSum(vector<int> &nums, int n) {
    vector<int> runningsum(n);
    if(n == 0) return runningsum;

    runningsum[0] = nums[0];
    for(int i = 1; i < n; i++) {
        runningsum[i] = runningsum[i-1] + nums[i];
    }
    return runningsum;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> runningSum = getRunningSum(v, n);
    int totalSum = runningSum[n-1];
    bool found = false;

    for(int i = 0; i < n; i++) {
        // লজিক: i ইনডেক্সের বামের যোগফল
        int lsum = (i == 0) ? 0 : runningSum[i-1];
        
        // লজিক: i ইনডেক্সের ডানের যোগফল
        int rsum = totalSum - lsum - v[i];

        if(lsum == rsum) {
            cout << i << endl; // প্রশ্ন অনুযায়ী শুধু ইনডেক্স প্রিন্ট
            found = true;
            // break; 
        }
    }

    if(!found) cout << -1 << endl;

    return 0;
}