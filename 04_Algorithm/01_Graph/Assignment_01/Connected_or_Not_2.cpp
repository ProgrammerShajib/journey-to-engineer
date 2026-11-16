#include <bits/stdc++.h>
using namespace std;

bool adj[1005][1005]; // adjacency matrix

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] = true;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "YES\n";
        }
        else if (adj[a][b])
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
