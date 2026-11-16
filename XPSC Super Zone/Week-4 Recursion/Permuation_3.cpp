#include<bits/stdc++.h>
using namespace std;

void permutation(vector<int> &nums, vector<int> &a, vector<vector<int> > &ans, vector<int> &freq){

    if(a.size() == nums.size()){
        ans.push_back(a);
        return ;
    }
    for(int i = 0;i<nums.size();i++){
        if(!freq[i]){
            a.push_back(nums[i]);
            freq[i] = 1;
            permutation(nums, a, ans , freq);
            freq[i] = 0;
            a.pop_back();
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;cin>> n;
    vector<int> nums(n);
    for(int &i : nums)cin>> i;
    // for(auto c : nums) cout << c <<" ";

    vector<vector<int> > ans;
    vector<int> a;
    vector<int> freq;

    permutation(nums, a,ans , freq);

    for(auto c : ans ){
        for(auto d : c) cout << d <<" " ;
        cout << " , " ;
    }
    
    return 0;
}