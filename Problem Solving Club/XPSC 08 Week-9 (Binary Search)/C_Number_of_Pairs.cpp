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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        long long total_pairs = 0;

        for (int i = 0; i < n; i++)
        {

            auto start_it = lower_bound(a.begin() + i + 1, a.end(), l - a[i]);
            auto end_it = upper_bound(a.begin() + i + 1, a.end(), r - a[i]);

            total_pairs += (end_it - start_it);
        }

        cout << total_pairs << "\n";
    }
    return 0;
}