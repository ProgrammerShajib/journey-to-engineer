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
        int N;
        cin >> N;
        int odd_cnt = 0;
        int even_cnt = 0;
        for (int i = 0; i < N; i++)
        {
            int val;
            cin >> val;
            if (val % 2 == 0)
            {
                even_cnt++;
            }
            else
            {
                odd_cnt++;
            }
        }
        if (odd_cnt == even_cnt)
        {
            cout << odd_cnt + even_cnt << "\n";
        }
        else
        {
            cout << 2 * min(odd_cnt, even_cnt) + 1 << "\n";
        }
    }
    return 0;
}