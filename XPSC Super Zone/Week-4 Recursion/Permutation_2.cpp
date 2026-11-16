#include<bits/stdc++.h>
using namespace std;

void backTrack(vector<int> &nums, int index, vector<vector<int>> &ans) {
    // Base Case: If the index reaches the end, we have a complete permutation
    if (index == nums.size()) {
        ans.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++) {
        // 1. Choose: Swap the current element into the 'index' position
        swap(nums[index], nums[i]);
        
        // 2. Explore: Move to the next position
        backTrack(nums, index + 1, ans);
        
        // 3. Un-choose (Backtrack): Swap them back to restore the original order
        swap(nums[index], nums[i]);
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    
    // Start backtracking from index 0
    backTrack(nums, 0, ans);

    // Print results
    for (auto &row : ans) {
        cout << "[";
        for (int i = 0; i < row.size(); i++) {
            cout << row[i] << (i == row.size() - 1 ? "" : ", ");
        }
        cout << "]\n";
    }
    
    return 0;
}