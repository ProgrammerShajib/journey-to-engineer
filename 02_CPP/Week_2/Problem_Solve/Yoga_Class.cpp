#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int h, X, Y;
        cin >> h >> X >> Y;
        if (Y > 2 * X)
        {
            int max_money = (h / 2) * Y;
            int remain = (h % 2) * X;
            cout << max_money + remain << endl;
        }
        else if (Y <= 2 * X)
        {
            cout << h * X << endl;
        }
    }
    return 0;
}