#include<bits/stdc++.h>
using namespace std;
vector<int > adjacency_list[1005];
bool visited[1005];
int level[1005];
void bfs(int r)
{
    queue<int> q;
    q.push(r);
    visited[r] = true;
    level[r] = 0;
    while(!q.empty()){
        // first get the first value from the queue
        int parent = q.front();
        q.pop();

        cout << parent << " ";
        // parent node er sate kon kon node connect ase kuje ber koro
        for(auto child: adjacency_list[parent])
        {
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
            }
        }
    }
}
int main()
{

    // take the input number of node and edge
    int n, e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        adjacency_list[a].push_back(b);
        adjacency_list[b].push_back(a);
    }
    int src, dst;
    cin >> src >> dst;
    memset(visited,false, sizeof(visited));
    memset(level,-1, sizeof(level));
    bfs(src);
    cout << "\n\n";
    // for(int i = 0;i<n;i++){
    //     cout << i << " -> " << level[i] << "\n";
    // }

    cout << src<< " to "<<  dst << " level -> " << level[dst];

    return 0;
}