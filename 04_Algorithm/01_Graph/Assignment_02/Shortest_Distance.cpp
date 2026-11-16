#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, e;
    cin >> n >> e;

    long long adj_mat[n + 1][n + 1];
    long long INF = 1e18;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                adj_mat[i][j] = 0;
            }
            else
            {
                adj_mat[i][j] = INF;
            }
        }
    }

    while (e--)
    {
        int a, b;
        long long c;
        cin >> a >> b >> c;

        adj_mat[a][b] = min(adj_mat[a][b], c);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj_mat[i][k] != INF && adj_mat[k][j] != INF &&
                    adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
                {

                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }

    bool cycle = false;

    for (int i = 1; i <= n; i++)
    {
        if (adj_mat[i][i] < 0)
        {
            cycle = true;
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        if (adj_mat[a][b] == INF)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << adj_mat[a][b] << "\n";
        }
    }

    return 0;
}