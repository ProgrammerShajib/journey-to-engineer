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
        vector<int> p(n);
        for (auto &c : p)
            cin >> c;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (p[j] > p[j + 1] && abs(p[j] - p[j + 1]) > 1)
                {
                    swap(p[j], p[j + 1]);
                }
            }
        }

        
        for (int i = 0; i < n; i++)
        {
            cout << p[i];
            if (i < n - 1)
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}