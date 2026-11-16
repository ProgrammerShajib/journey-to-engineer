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
        int a, b;
        cin >> a >> b;

        while (a--)
        {
           
            if (b >= 3)
            {
                b -= 3;
            }
            else if (b >= 1)
            {
                b -= 1;
            }

            if (b <= 0)
            {
                break;
            }
        }

        if (a == 0 && b == 0)
        {
         
            cout << "YES\n";
        }
        else
        {
     
            cout << "NO\n";
        }
    }
    return 0;
}