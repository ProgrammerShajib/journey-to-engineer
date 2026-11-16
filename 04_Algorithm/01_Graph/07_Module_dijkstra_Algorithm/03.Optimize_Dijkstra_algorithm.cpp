#include<bits/stdc++.h>
using namespace std;
vector <pair<int,int >> adj_list[105];
int dis[105];
int parent[105];
// time complexity = O(Elogv + Vlogv) = O logv(E+v) = O logv(E+E) = O logv(2E) O (Elogv)
void dijkstra(int src){
    priority_queue<pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>> q;
    q.push({0,src});
    dis[src] = 0;

    while(!q.empty()){
        pair<int,int> par = q.top();
        q.pop();
        int par_node = par.second;
        int par_dis = par.first;

        // if(par_dis > dis[par_node]) continue;
        for(auto child : adj_list[par_node]){
            int child_node = child.first;
            int child_dis = child.second;

            if(par_dis + child_dis < dis[child_node]){
                dis[child_node] = par_dis + child_dis;
                q.push({dis[child_node],child_node});
                parent[child_node] = par_node; 
            }
        }
    }
}

int main(){

    int n , e;
    cin >> n >> e;
 
    while(e--){
        int a , b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }
 

    for(int i =0;i<n;i++){
        dis[i] = INT_MAX;
        parent[i] = -1;
    }
    dijkstra(0);
    // for(int i =0;i<n;i++){
    //    cout << i << " -> " << dis[i] <<endl;
    // }

    for(auto child : parent){
        cout << child <<" " ;
    }

    return 0;
}