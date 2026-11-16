#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long int> v(n);

        long long int h1 = -1, h2 = -1;
        int index_h1 = -1, index_h2 = -1;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            if (a > h1)
            {
                h2 = h1;
                index_h2 = index_h1;
                h1 = a;
                index_h1 = i;
            }
            else if (a > h2)
            {
                h2 = a;
                index_h2 = i;
            }
        }

        if (index_h1 < index_h2)
        {

            cout << index_h1 << " " << index_h2 << "\n";
        }
        else
        {
            cout << index_h2 << " " << index_h1 << "\n";
        }
    }

    return 0;
}