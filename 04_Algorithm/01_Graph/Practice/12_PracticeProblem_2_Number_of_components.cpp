#include<bits/stdc++.h>
using namespace std;

vector<int > adj_list[105];
bool vis[105];
int cnt = 0;
void dfs(int src){
    // cout << src << " ";
    vis[src] = true;
    cnt++;
    cout << src << " " ;
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

    //  for(int i = 0;i <n;i++){
    //     cout << i << " ->" ;
    //     for(auto child: adj_list[i]){
    //         cout << child << " ";
    //     }
    //     cout << endl;
    // }
    
    int element = 0;
    for(int i= 0;i<n;i++){
        if(!vis[i]){
            element++;
            dfs(i);
            // cout << endl;
        }
    }
    // dfs(0);
    cout<< "\n" << element;
    
    return 0;
}