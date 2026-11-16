#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[105];
bool vis[105];
void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()){
        int parent = q.front();
        cout << parent << " ";
        q.pop();

        for(auto child: adj_list[parent]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
            }
        }
    }
}
int main(){

    int n, e;
    cin >> n >> e;
    while(e--){
        int a, b;
        cin >>  a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    // for(int i = 0;i<n;i++){
    //     cout << i <<" ->";
    //     for(auto child: adj_list[i]){
    //         cout << child << " ";
    //     }
    //     cout << "\n";
    // }

    memset(vis, false, sizeof(vis));
    int src, dst;
    cin >> src >> dst;
    bfs(src);
    cout << "\n";
    if(vis[dst])
        cout << dst << "-> Node found ";
    else    
        cout << dst <<  " -> Node Not found";
    return 0;
}