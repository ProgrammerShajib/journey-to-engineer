#include<bits/stdc++.h>
using namespace std;

vector<int > adj_list[105];
bool vis[105];
int cnt = 0;
void dfs(int src){
    // cout << src << " ";
    vis[src] = true;
    cnt++;
    for(auto child: adj_list[src]){
        if(!vis[child]){
            dfs(child);
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
        adj_list[b].push_back(a);
    }
 
    vector<int> v;

    for(int i =0;i<n;i++){
        if(vis[i] == false){
            dfs(i);
            // cout << "\n" << cnt;
            // cout << endl;
            v.push_back(cnt);
            cnt = 0;
        }
    }
 
    sort(v.begin(), v.end());
    for(auto child : v){
        cout << child << " ";
    }
    return 0;
}