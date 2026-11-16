#include<bits/stdc++.h>
using namespace std;
bool vis[105];
vector<int> adj_list[105];
int parent[105];
bool pathvis[105];
bool cycle;

// Cycle detect using the BFS in undirected graph
// void bfs(int src){
//     queue<int> q;
//     q.push(src);
//     vis[src] = true;
    
//     while(!q.empty()){
//         int par = q.front();
//         q.pop();
//         // cout << par <<endl;
//         for(auto child : adj_list[par]){
//             if(vis[child] && parent[par] != child){
//                 cycle = true;
//             }
//             if(!vis[child]){
//                 q.push(child);
//                 vis[child] = true;
//                 parent[child] = par;
//             }
//         }
//     }
// }

// Cycle Detect using the DFS in undireceted graph

// void dfs(int src){
//     vis[src] = true;
//     // cout << src << endl;
//     for(auto child : adj_list[src]){
//         if(vis[child] && parent[src] != child){
//             cycle = true;
//         }
//         if(!vis[child]){
//             parent[child ] = src;
//             dfs(child);
//         }
//     }
// }

// Cycle Detect using the DFS in directed graph
int cnt = 0;
void dfs(int src){
    vis[src] = true;
    pathvis[src] = true;
    for(auto child : adj_list[src]){
        if(vis[child] && pathvis[child]){
            cycle = true;
            cnt++;
        }


        if(!vis[child]){
            dfs(child);
        }
    }

    pathvis[src] = false;
}
int main(){

    int n ,e;
    cin >> n >> e; 
    while(e--){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
   
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    memset(pathvis, false, sizeof(pathvis));
    cycle = false;
    for(int i =0;i<n;i++){
        if(!vis[i]){
             dfs(i);
        }
    }

    if(cycle){
        cout << "Cycle detected!";
    }else{
        cout << "Cycle not detected";
    }
    cout << cnt;
    return 0;
}