#include <bits/stdc++.h>
using namespace std;
vector<int> adjacen_list[1005]; // this list will store the vallue
bool vis[1005];                 // this array will track the node visited or not

// BFS level order maintain kore kaj kore
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        // node ke ber kore ana
        int parent = q.front();
        q.pop();

        // oi node niye kaj kora
        cout << parent << " ";
        for (auto child : adjacen_list[parent])
        {
            if (!vis[child])
            {
                // Nonvisited children golo push kora
                q.push(child);
                vis[child] = true;
            }
        }
    }
}
int main()
{

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adjacen_list[a].push_back(b);
        adjacen_list[b].push_back(a);
    }
 
    
    bfs(0);
    return 0;
}