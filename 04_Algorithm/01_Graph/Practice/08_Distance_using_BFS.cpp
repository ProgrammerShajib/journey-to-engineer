#include<bits/stdc++.h>
using namespace std;
vector<int > adj_list[105];
bool vis[105];
int level[105];
void bfs(int src){
    queue<int > q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty()){
        int parent = q.front();
        cout << parent << " ";
        q.pop();
        for(auto child : adj_list[parent]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[parent]+1;

            }
        }
    }
}


int main(){

    int n , e;
    cin >> n >> e;
    while(e--){
        int a , b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        // adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(level, false, sizeof(level));
    int src, dst;
    cin >> src >> dst;
    
    bfs(src);
    cout<<"\n" <<  src << " to " << dst <<"\nShortest distance is " <<level[dst];
    return 0;
}