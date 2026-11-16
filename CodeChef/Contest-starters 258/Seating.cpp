#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        unordered_map<int, bool> mp;
        for (int i = 0; i < m; i++)
        {
            int seat;
            cin >> seat;
            mp[seat] = true;
        }

        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            if (!mp[i])
            {
                ans.push_back(i);
                if (ans.size() == k)
                {
                    break;
                }
            }
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}