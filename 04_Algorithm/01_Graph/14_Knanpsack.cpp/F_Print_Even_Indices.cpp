#include <bits/stdc++.h>
using namespace std;

vector<int> ar;
vector<int> v;

void recursion(int n)
{
    if (n < 0)
        return;
    if (n % 2 == 0)
    {

        v.push_back(ar[n]);
        recursion(n - 1);
    }
    else
    {
        recursion(n - 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a;
        cin >> a;
        ar.push_back(a);
    }

    int sz = ar.size();
    recursion(sz - 1);

    int s = v.size();
    for (int i = 0; i < s - 1; i++)
    {
        cout << v[i] << " ";
    }

    cout << v[s - 1];

    return 0;
}