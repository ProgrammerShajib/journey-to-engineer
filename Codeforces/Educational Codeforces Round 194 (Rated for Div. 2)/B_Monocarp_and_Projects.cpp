#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll diff = y - x;
        ll ans = 0;
        while (k > 0 && x <= diff)
        {
            ans += diff % x;
            x++;
            k--;
        }
        if (k > 0)
        {
            ans += k *diff;
        }
        cout << ans << "\n";
    }
    return 0;
}