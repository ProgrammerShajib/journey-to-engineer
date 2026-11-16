#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n))
        return 0;

    int original_n = n;
    vector<long long> v;
    while (n--)
    {
        long long val;
        cin >> val;
        v.push_back(val);
    }

    vector<int> s(original_n, 0);
    for (int i = 1; i < original_n - 1; i++)
    {
        if (v[i] < v[i - 1] && v[i] < v[i + 1])
        {
            s[i] = 1;
        }
    }

    vector<int> p_sum(original_n + 1, 0);
    for (int i = 0; i < original_n; i++)
    {
        p_sum[i + 1] = p_sum[i] + s[i];
    }

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        if (r - l < 2)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << p_sum[r - 1] - p_sum[l] << "\n";
        }
    }
    return 0;
}