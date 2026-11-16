#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    vector<long long > rem_cnt(n,0);
    rem_cnt[0] = 1;
    long long current_sum = 0;
    long long subarray_cnt = 0;

    for(int i = 0;i<n;i++){
        current_sum += a[i];
        long long rem = ((current_sum %n ) + n ) % n;
        subarray_cnt += rem_cnt[rem];

        rem_cnt[rem]++;
    }

    cout << subarray_cnt;
    return 0;
}