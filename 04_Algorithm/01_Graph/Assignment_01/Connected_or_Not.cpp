#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (auto child : adj_list[parent])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[parent] + 1;
            }
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false); // Fast I/O
    cin.tie(NULL);
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    int t;
    cin >> t;

    while (t--)
    {
     
        long long src, dst;
        cin >> src >> dst;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

 

        if (src == dst)
        {
            cout << "YES\n";
        }
        else
        {
            bfs(src);
            if (level[dst] == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}