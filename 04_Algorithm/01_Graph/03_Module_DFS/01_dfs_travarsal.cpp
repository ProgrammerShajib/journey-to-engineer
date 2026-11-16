#include<bits/stdc++.h>
using namespace std;
vector<int > adjacency_List[1005];
bool vis[1005];
void dfs (int src){
    cout << src << " ";

    vis[src] = true;
    for(auto child : adjacency_List[src]){
        if(!vis[child])
            dfs(child);
    }
}

int main(){

    int n, e;
    cin >> n >> e;
    while(e--){
        int a , b;
        cin >> a >> b;
        adjacency_List[a].push_back(b);
        adjacency_List[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    dfs(0);
    return 0;
}