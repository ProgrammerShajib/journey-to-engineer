#include<bits/stdc++.h>
using namespace std;

 
const int MAXN = 100005;
const long long INF = 1e18; // Use a very large value for long long

vector<pair<int, int>> adj_list[MAXN];
long long dis[MAXN];  
int parent[MAXN];

void dijkstra(int src) {
  
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
    
    q.push({0, src});
    dis[src] = 0;

    while (!q.empty()) {
        pair<long long, int> par = q.top();
        q.pop();
        
        long long par_dis = par.first;
        int par_node = par.second;

        // Optimization: skip if we already found a better path
        
        if (par_dis > dis[par_node]) continue;

        for (auto child : adj_list[par_node]) {
            int child_node = child.first;
            int edge_weight = child.second;

            if (dis[par_node] + edge_weight < dis[child_node]) {
                dis[child_node] = dis[par_node] + edge_weight;
                parent[child_node] = par_node;
                q.push({dis[child_node], child_node});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); // Faster I/O
    cin.tie(NULL);

    int n, e;
    if (!(cin >> n >> e)) return 0;

    while (e--) {
        int a, b, w;
        cin >> a >> b >> w;
        adj_list[a].push_back({b, w});
        adj_list[b].push_back({a, w});
    }

    for (int i = 1; i <= n; i++) {
        dis[i] = INF;
        parent[i] = -1;
    }

    dijkstra(1);

    if (dis[n] == INF) {
        cout << -1 << endl;
    } else {
        vector<int> path;
        int current = n;
        while (current != -1) {
            path.push_back(current);
            current = parent[current];
        }
        reverse(path.begin(), path.end());
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << (i == path.size() - 1 ? "" : " ");
        }
      
    }

    return 0;
}