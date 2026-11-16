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

        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int total = n / k;
        int school = 0;

        for (int i = 0; i < total; i++)
        {
            bool zero = false;
            for (int j = 0; j < k; j++)
            {
                if (s[i * k + j] == '0')
                {
                    zero = true;
                    break;
                }
            }
            if (!zero)
            {
                school++;
            }
        }

        cout << school << "\n";
    }
    return 0;
}

 
