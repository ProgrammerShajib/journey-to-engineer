#include <bits/stdc++.h>
using namespace std;

long long int dp[100005];

bool knapsack(long long int src, long long int target)
{

    if (src == target)
        return true;

    if (src > target)
        return false;

    if (dp[src] != -1)
    {
        return dp[src];
    }

    bool op1 = knapsack(src + 3, target);
    bool op2 = knapsack(src * 2, target);

    dp[src] = op1 || op2;
    return dp[src];
}
int main()
{

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a;
        cin >> a;
        memset(dp, -1, sizeof(dp));
        bool result = knapsack(1, a);
        if (result)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << "\n";
    }

    return 0;
}