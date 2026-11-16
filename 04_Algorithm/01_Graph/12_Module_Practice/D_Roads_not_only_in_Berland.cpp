#include <bits/stdc++.h>
using namespace std;
int par[1005];
int group_size[1005];
int n, e;

int find(int src)
{
    if (par[src] == -1)
    {
        return src;
    }

    int leader = find(par[src]);
    par[src] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (group_size[leader1] >= group_size[leader2])
    {
        group_size[leader1] += group_size[leader2];
        par[leader2] = leader1;
    }
    else
    {
        group_size[leader2] += group_size[leader1];
        par[leader1] = leader2;
    }
}
vector<pair<int, int>> removed_eadge;
vector<pair<int, int>> road_create;

int main()
{

    cin >> n;
    e = n - 1;

    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA == leaderB)
        {
            // cycle
            removed_eadge.push_back({a, b});
        }
        else
        {
            dsu_union(a, b);
        }
    }

    for (int i = 2; i <= n; i++)
    {
        int leader1 = find(1);
        int leader2 = find(i);
        if (leader1 != leader2)
        {
            road_create.push_back({leader1, leader2});
            dsu_union(leader1, leader2);
        }
    }

    cout << removed_eadge.size() << "\n";
    for (int i = 0; i < removed_eadge.size(); i++)
    {
        cout << removed_eadge[i].first << " " << removed_eadge[i].second << " " << road_create[i].first << " " << road_create[i].second << "\n";
    }

    return 0;
}