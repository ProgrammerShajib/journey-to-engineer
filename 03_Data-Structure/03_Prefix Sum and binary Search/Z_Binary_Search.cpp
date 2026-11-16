#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, t;
    cin >> n >> t;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < t; i++)
    {
        int q;
        cin >> q;
        int flag = 0;
        int l = 0, r = n - 1;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == q)
            {
                flag = 1;
                break;
            }
            else if (q < v[mid])
            {
                r = mid - 1;
            }
            else if (q > v[mid])
            {
                l = mid + 1;
            }
        }

        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}