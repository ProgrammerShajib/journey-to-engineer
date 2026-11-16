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
    // for(int i = 0;i<n;i++){
    //     if(vis[i] == false){
    //         // here it will print the all element in the graph
    //         dfs(i);

    //         cout << endl;
    //     }
    // }
    dfs(5);
    return 0;
}