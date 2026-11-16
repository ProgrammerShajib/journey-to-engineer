#include <bits/stdc++.h>
using namespace std;

vector<int> adjacen_list[1000];
bool visited_array[1000];

void bfs(int r)
 {
    queue<int> q;
    q.push(r);
    visited_array[r] = true;
    while (!q.empty())
    {
        // node ber kore ana 
        int parent = q.front();
        q.pop();

        // Oi node inye kaj kora
        cout << parent << " ";
        for (auto child : adjacen_list[parent])
        {
            if (!visited_array[child])
            {
                q.push(child);
                visited_array[child] = true;
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
        // here we are pushing the value with undirected
        adjacen_list[a].push_back(b);
        adjacen_list[b].push_back(a);
    }
    memset(visited_array,false, sizeof(visited_array));
    int source, destination;
    cin >> source >> destination;
    bfs(source);
   
    
    if (visited_array[destination])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}