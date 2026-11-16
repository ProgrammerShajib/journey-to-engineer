#include <bits/stdc++.h>
using namespace std;

long long n, e;

class Edge
{
public:
    long long a, b, c;
    Edge(long long a, long long b, long long c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

vector<Edge> edgList;

long long dis[1005];
int parent[1005];

void bellman_ford(int src)
{
    dis[src] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto edge : edgList)
        {
            long long a = edge.a;
            long long b = edge.b;
            long long c = edge.c;

            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
                parent[b] = a;
            }
        }
    }

    bool cycle = false;

    for (auto edge : edgList)
    {
        long long a = edge.a;
        long long b = edge.b;
        long long c = edge.c;

        if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
        {
            cycle = true;
        }
    }

    if (cycle)
    {
        cout << "Negative Cycle Detected\n";
        return;
    }

    int t;
    cin >> t;

    while (t--)
    {
        int d;
        cin >> d;

        if (dis[d] == LLONG_MAX)
            cout << "Not Possible\n";
        else
            cout << dis[d] << "\n";
    }
}

int main()
{
    cin >> n >> e;

    while (e--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        edgList.push_back(Edge(a, b, c));
    }

    for (int i = 1; i <= n; i++)
        dis[i] = LLONG_MAX;

    memset(parent, -1, sizeof(parent));

    int src;
    cin >> src;

    bellman_ford(src);
}