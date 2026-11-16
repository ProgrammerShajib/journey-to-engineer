#include <bits/stdc++.h>
using namespace std;

class Count
{

public:
    Count()
    {
    }

    int e = 0, g = 0, y = 0, p = 0, t = 0;
    int countWords(string s)
    {

        for (char c : s)
        {
            char lowerC = tolower(c);
            if (lowerC == 'e')
            {
                e++;
            }
            else if (lowerC == 'g')
            {
                g++;
            }
            else if (lowerC == 'y')
            {
                y++;
            }
            else if (lowerC == 'p')
            {
                p++;
            }
            else if (lowerC == 't')
            {
                t++;
            }
        }

        return min({e, g, y, p, t});
  
    }
};
int main()
{

    string s;
    cin >> s;

    Count solver;
    int num = solver.countWords(s);
    cout << num ;

    // cout << s;
    return 0;
}