#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int l = 0, r = n - 1;
    int ans = 0;
    while (l <= r)
    {
        if (a[l] <= k)
        {
            ans++;
            l++;
        }
        else if (a[r] <= k)
        {
            ans++;
            r--;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}