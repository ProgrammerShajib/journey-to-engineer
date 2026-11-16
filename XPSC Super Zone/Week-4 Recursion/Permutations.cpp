#include<bits/stdc++.h>
using namespace std;
 
void backTrack(vector<int> &nums, vector<int> &a, vector<vector<int>> &ans, vector<int> &freq) {
    if (nums.size() == a.size()) {
        ans.push_back(a);
        return;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (freq[i] == 0) {
            a.push_back(nums[i]);
            freq[i] = 1;
            backTrack(nums, a, ans, freq);
            freq[i] = 0;
            a.pop_back();   // back tracking         
        }
    }
}



int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    vector<int> nums(n);
    for (auto &i : nums) cin >> i;
    
    vector<vector<int>> ans;
    vector<int> a;
    vector<int> freq(nums.size(), 0);
    
    backTrack(nums, a, ans, freq);

    cout << "[";
    for (int i = 0; i < ans.size(); i++) {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j];
            if (j != ans[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i != ans.size() - 1) {
            cout << ",";
        }
    }
    cout << "]";
    
    return 0;
}