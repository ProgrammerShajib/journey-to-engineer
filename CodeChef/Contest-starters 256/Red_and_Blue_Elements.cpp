#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        vector<ll> a(n);
        ll total_sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total_sum += a[i];
        }
        sort(a.begin(), a.end());

        ll max_ans = 0;
        ll sr = 0;
        for (int k = 1; k < n; k++)
        {
            sr += a[n - k];
            ll cr = k;
            ll cb = n - k;
            ll sb = total_sum - sr;
            ll curr = (sr * cb) + (sb * cr);
            max_ans = max(max_ans, curr);
        }

        cout << max_ans << "\n";
    }
    return 0;
}