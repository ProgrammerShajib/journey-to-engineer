#include <bits/stdc++.h>
using namespace std;
int main()
{

    char ar[100001];
    while (cin.getline(ar, 100001))
    {

        char a[100001];
        int idx = 0;
        for (int i = 0; ar[i] != '\0'; i++)
        {

            if (ar[i] != ' ')
            {
                a[idx] = ar[i];
                idx++;
            }
        }

        a[idx] = '\0';

        sort(a, a + idx);
        cout << a << endl;
    }

    return 0;
}