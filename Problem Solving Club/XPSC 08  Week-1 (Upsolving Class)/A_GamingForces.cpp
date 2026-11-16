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
        int n;
        cin >> n;
        map<string, int> freq;
        for (int i = 0; i < n; i++)
        {
            string a;
            cin >> a;
            freq[a]++;
        }

        int m = 0;
        int val = freq["1"];
        int val2 = freq["2"];
        int v1 = val / 2;
        int v2 = val2 / 2;
        m = m + (1 * v1) + (val - (v1 * 2));
        m = m + (2 * v2) + (val2 - (v2 * 2));

        m = m + (n - (val + val2));

        cout << m << endl;
    }
    return 0;
}