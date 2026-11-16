#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {1, 2, 3, 4, 5};

    sort(v.begin(), v.end());

    int x = 5;
    cin >> x;
    int flag = 0;

    int l = 0, r = v.size() - 1;

    for (l; l <= r;)
    { 
        int mid = (l + r) / 2;

        if (v[mid] == x)
        {
            flag = 1;
            break;
        }
        else if (x > v[mid])
        {
            l = mid + 1;
        }
        else if (x < v[mid])
        {
            r = mid - 1;
        }
    }

    
    // while (l <= r)
    // {
    //     int mid = (l + r) / 2;

    //     if (v[mid] == x)
    //     {
    //         flag = 1;
    //         break;
    //     }
    //     else if (x > v[mid])
    //     {
    //         l = mid + 1;
    //     }
    //     else if (x < v[mid])
    //     {
    //         r = mid - 1;
    //     }
    // }

    if (flag == 1)
    {
        cout << "found";
    }
    else
    {
        cout << " Not found";
    }

    return 0;
}