#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int ar[26] = {0};
        for (int i = 0; i < (int) s.length(); i++)
        {
            ar[s[i] - 'a']++;
        }
        int count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (ar[i] % 2 != 0)
            {
                count++;
            }
        }

        int result = 0;
        if (count > 1)
        {
            result = count - 1;
        }
        else
        {
            result = 0;
        }

        cout << result << endl;
    }
    return 0;
}