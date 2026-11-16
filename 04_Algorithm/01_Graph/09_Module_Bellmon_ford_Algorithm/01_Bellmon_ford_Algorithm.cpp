#include <bits/stdc++.h>
using namespace std;
int n, e;
class Edge
{

public:
    int a, b, c;

    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
vector<Edge> edgList;
int parent[105];
int dis[105];

void bellmon_ford(int src)
{
    dis[src] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (auto edge : edgList)
        {
            int a = edge.a;
            int b = edge.b;
            int c = edge.c;

            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
                parent[b] = a;

            }
        }
    }

    bool cycle = false;
    for (auto edge : edgList)
    {
        int a = edge.a;
        int b = edge.b;
        int c = edge.c;

        if (dis[a] != INT_MAX && dis[a] + c < dis[b])
        {
            cycle = true;
        }
    }


    // Accoroding to the bellmon ford algorithm the edge list must be relaxed after n-1 time iteration so we are checking here if after all the operation we are running another iteration to know if there any change hapen or not if happened then there is a cycle present. if not then we simply print the distance along with the data 
    if (cycle)
    {
        cout << "Cycle Detected!";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " -> " << dis[i] << endl;
        }
    }
}
int main()
{

    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edgList.push_back(Edge(a, b, c));
    }
    memset(parent, -1, sizeof(parent));
    // for (auto child : edgList)
    // {
    //     cout << child.a << " " << child.b << " " << child.c << "\n";
    // }

    // initialize distance array to infinite
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    
    int src, dst;
    cin >> src >> dst;
    dis[src] = 0;
    bellmon_ford(src);

    cout << dis[dst];
    // int node = dst;
    // while (node != -1){
    //     cout << node << " ";
    //     node = parent[node];
    // }
    
    return 0;
}