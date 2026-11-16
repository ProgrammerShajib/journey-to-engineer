#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<vector<int> > adj;
vector<int> color;

void dfs(int u, int par, int col){
    color[u] = col;
    for(auto &v : adj[u]){
        if(v != par){
            dfs(v, u, 3 -col);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin>>n;
    adj.resize(n+1);
    color.resize(n+1,0);
    for(int i = 1;i<n;i++){
        int u , v;
        cin>> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    dfs(1,0,1);
    
    ll cnt1 = 0, cnt2 = 0;
    for(int i = 1;i<=n;i++){
        // cout << color[i] <<" ";
        if(1 == color[i]){
            cnt1++;
        }else{
            cnt2++;
        }
    }

    cout << (cnt1*cnt2) - (n-1);
    
    return 0;
}