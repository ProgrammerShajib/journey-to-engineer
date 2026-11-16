#include<bits/stdc++.h>
using namespace std;
vector<int> adjacent_list[1005];
bool visited[1005];
int parent_ar[1005];
void bfs(int r){
    queue<int> q;
    q.push(r);
    visited[r] = true;
    parent_ar[r] = -1; // No need to do this because we already done it initaly
    while(!q.empty()){
        int parent = q.front();
        q.pop();

        cout<< parent << " ";
        for(auto child : adjacent_list[parent]){
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
                parent_ar[child] = parent;
            }
        }
        
    }
}
int main(){

    int n, e;
    cin >> n >> e;
    while(e--){
        int a, b;
        cin >> a >> b;
        adjacent_list[a].push_back(b);
        adjacent_list[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    memset(parent_ar, -1, sizeof(parent_ar));
    int src, dst;
    cin >> src>> dst;
    bfs(src);
    cout << endl;
    int node = dst;
 
    // cout <<"\n\n(" << src << "," << dst <<") Path -> ";
    vector<int> path;
     while(node != -1){
        // cout << node << " ";
        path.push_back(node);
        node = parent_ar[node];
    }

    cout << endl;
    reverse(path.begin(), path.end());
    for(int p : path){
        cout << p << "-> ";
    }
    return 0;
}