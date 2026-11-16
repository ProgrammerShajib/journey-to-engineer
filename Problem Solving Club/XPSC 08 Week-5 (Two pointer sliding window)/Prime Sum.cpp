#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            cnt1++;
        }
        else if (a == 2)
        {
            cnt2++;
        }
        else if (a == 3)
        {
            cnt3++;
        }
    }

    long long pair = (cnt1 * (cnt1 - 1)) / 2;
    pair += (cnt1 * cnt2);
    pair += (cnt2 * cnt3);
    cout << pair << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}