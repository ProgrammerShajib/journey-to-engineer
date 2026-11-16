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
        string s;
        cin >> s;
        int b = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                b++;
            }
        }
        int total = (n - 1) - b;
        if (total >= 3)
        {
            cout << b + 2 << "\n";
        }
        else if (total == 2)
        {
            cout << b + 1 << "\n";
        }
        else
        {
            cout << b << "\n";
        }
    }
    return 0;
}