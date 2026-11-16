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
        string s1, s2;
        cin >> s1 >> s2;
        int s1_even_one = 0;
        int s1_odd_one = 0;
        int s2_even_one = 0;
        int s2_odd_one = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (s1[i] == '1')
                    s1_even_one++;
                if (s2[i] == '1')
                    s2_even_one++;
            }
            else
            {
                if (s1[i] == '1')
                    s1_odd_one++;
                if (s2[i] == '1')
                    s2_odd_one++;
            }
        }
        if ((s1_even_one == s2_even_one) && (s1_odd_one == s2_odd_one))
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