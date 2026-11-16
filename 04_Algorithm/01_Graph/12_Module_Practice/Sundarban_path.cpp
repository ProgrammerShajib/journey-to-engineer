#include<bits/stdc++.h>
using namespace std;
char ar[30][30];
bool vis[30][30];
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0}, {1,0}};
int level[30][30];
pair<int,int> parent[30][30];
int n;
bool valid(int ci , int cj){
    if(ci <0 || ci >=n || cj < 0 || cj >= n){
        return false ;
    }else{
        return true;
    }
}
void bfs(int si , int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});

    vis[si][sj] = true;
    level[si][sj] = 0;
    while(!q.empty()){
        pair<int,int> par = q.front();
        q.pop();
        int p_i = par.first;
        int p_j = par.second;
        for(int i =0;i<4;i++){
            int ci = p_i + d[i].first;
            int cj = p_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] &&( (ar[ci][cj] == 'P') || (ar[ci][cj] = 'E'))){
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[p_i][p_j] + 1;
            }
        }
        
    }
}
int main(){

    cin >> n;
    int si = -1 , sj =-1 , ei =-1 , ej =-1;
    for(int i =0;i<n;i++){
        for(int j = 0;j <n;j++){
            cin >> ar[i][j] ;
            if(ar[i][j] == 'S'){
                si = i ;
                sj = j;
            }else if(ar[i][j] == 'E'){
                ei = i;
                ej = j;
            }
        }
    }

    memset(vis,false, sizeof(vis));
    memset(level , -1, sizeof(level));
    bfs(si, sj);

    
    if(vis[ei][ej]){
        cout << level[ei][ej];
    }
    
    return 0;
}