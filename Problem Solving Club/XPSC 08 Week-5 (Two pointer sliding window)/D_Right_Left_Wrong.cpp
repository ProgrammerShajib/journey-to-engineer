#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> pref(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }

    string s;
    cin >> s;

    long long total_score = 0;
    int l = 0, r = n - 1;

    while (l < r)
    {

        while (l < r && s[l] != 'L')
        {
            l++;
        }
        while (l < r && s[r] != 'R')
        {
            r--;
        }

        if (l < r)
        {
            total_score += (pref[r + 1] - pref[l]);
            l++;
            r--;
        }
    }

    cout << total_score << "\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}