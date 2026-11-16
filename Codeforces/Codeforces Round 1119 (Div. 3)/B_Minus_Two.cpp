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

        int odd = 0;
        int cnt_0 = 0;
        int cnt_2 = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            if (x % 2 != 0)
            {
                odd++;
            }
            else if (x % 4 == 0)
            {
                cnt_0++;
            }
            else
            {
                cnt_2++;
            }
        }

        cout << max({odd, cnt_0, cnt_2}) << "\n";
    }
    return 0;
}