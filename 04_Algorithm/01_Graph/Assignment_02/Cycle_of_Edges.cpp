#include <bits/stdc++.h>
using namespace std;
const int max_siz = 1e5 + 5;
int par[max_siz];
int group_size[max_siz];

int find(int node)
{
    if (par[node] == -1)
    {
        return node;
    }
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_Union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}
int main()
{

    for(int i =0;i<max_siz;i++){
        par[i] = -1;
        group_size[i] = 1;
    }

    int n, e;
    cin >> n >> e;
    int cnt =0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leader1 = find(a);
        int leader2 = find(b);

        if (leader1 == leader2)
        {
           cnt++;
        }
        else
        {
            dsu_Union(a, b);
        }
    }

    cout<< cnt;

    return 0;
}