#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2,1 ,1, 0, 0};
    int n = arr.size();

    // dp[i][j] = is subarray i to j palindrome?
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    // 🔹 1. Every single element is palindrome
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }

    // 🔹 2. Check length = 2 subarrays
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            dp[i][i + 1] = true;
        }
    }

    // 🔹 3. Check length >= 3
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;

            // if ends match AND inside is palindrome
            if (arr[i] == arr[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
            }
        }
    }

    // 🔹 4. Print all palindromic subarrays
    cout << "Palindromic subarrays:\n";

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (dp[i][j]) {
                cout << "[ ";
                for (int k = i; k <= j; k++) {
                    cout << arr[k] << " ";
                }
                cout << "]\n";
            }
        }
    }

    return 0;
}