#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        while (n--)
        {
            int a;
            cin >> a;
            mp[a]++;
        }

        priority_queue<int> pq;
        for (auto [k, v] : mp)
        {
            pq.push(v);
        }

        while (!pq.empty())
        {
            if (pq.size() < 2)
            {
                break;
            }
            int a, b;
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();

            a--, b--;
            if (a >= 1)
            {
                pq.push(a);
            }
            if (b >= 1)
            {
                pq.push(b);
            }
        }

        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }

        cout << ans << "\n";
    }
    return 0;
}