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
        vector<char> r;
        vector<int> lower_idx;
        vector<int> upper_idx;

        string s;
        cin >> s;
        for (char c : s)
        {

            if (c == 'b')
            {
                if (!lower_idx.empty())
                {

                    int idx = lower_idx.back();
                    lower_idx.pop_back();
                    r[idx] = '*';
                }
            }
            else if (c == 'B')
            {
                if (!upper_idx.empty())
                {

                    int idx = upper_idx.back();
                    upper_idx.pop_back();
                    r[idx] = '*';
                }
            }
            else
            {

                r.push_back(c);
                int idx = r.size() - 1;
                if (c >= 'a' && c <= 'z')
                {
                    lower_idx.push_back(idx);
                }
                else if (c >= 'A' && c <= 'Z')
                {
                    upper_idx.push_back(idx);
                }
            }
        }

        for (auto c : r)
        {
            if (c != '*')
            {

                cout << c;
            }
        }

        cout << endl;
    }
    return 0;
}