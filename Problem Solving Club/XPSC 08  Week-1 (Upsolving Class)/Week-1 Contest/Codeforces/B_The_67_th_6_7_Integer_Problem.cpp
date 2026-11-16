#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int sum = 0;

    for (int i = 0; i < t; i++)
    {
        int mx = -67;
        for (int i = 0; i < 7; i++)
        {
            int a;
            cin >> a;
            mx = max(a, mx);
            sum = sum - a;
        }

        sum = sum + (mx * 2);
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}