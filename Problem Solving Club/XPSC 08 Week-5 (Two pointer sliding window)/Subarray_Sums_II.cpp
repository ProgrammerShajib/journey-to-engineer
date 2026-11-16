#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    long long n, x;
    cin >> n >> x;
    vector<long long> v(n);
    for(auto &i : v) cin >> i;
    map<long long , long long > prefix_sum ;
    prefix_sum[0] = 1;

    long long cur_sum = 0;
    long long cnt_sub_arr =0;
    for(int i = 0;i<n;i++){
        cur_sum += v[i];
        long long  target = cur_sum - x;

        auto it = prefix_sum.find(target);
        if(it != prefix_sum.end()){
            cnt_sub_arr += it->second;
        }

        prefix_sum[cur_sum]++;
    }

    cout<< cnt_sub_arr ;
    return 0;
}