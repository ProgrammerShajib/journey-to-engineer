#include<bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
vector<pair<int,int>> v = {{-1,0},{1,0},{0,-1}, {0,1}};
int r, c;
int level[105][105];
bool valid(int ci ,int cj){
    if(ci < 0 || ci >=r || cj<0 || cj>=c){
        return false;
    }
    return true;
}

// dfs use korbo koto golo possibilities ase seta ber korar jonno
void dfs(int si , int sj){
    cout << si << " " << sj << endl;
    vis[si][sj] = true;

    for(int i = 0;i<4;i++){
        int ci = si + v[i].first;
        int cj = sj + v[i].second;
        if(valid(ci , cj) && !vis[ci][cj]){
            dfs(ci,cj);
        }
    }
    
}

void bfs(int si , int sj){
    queue<pair<int , int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while(!q.empty()){
        pair<int, int> par = q.front();
        int parent_i = par.first;
        int parent_j = par.second;
        // cout << parent_i << " " << parent_j << endl;
        q.pop();
        for(int i = 0;i<4;i++){
            
            int ci = parent_i + v[i].first;
            int cj = parent_j + v[i].second;
            
            if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.'){
                q.push({ci, cj});
                
                vis[ci][cj] = true;
                level[ci][cj] = level[parent_i][parent_j] + 1;
            }
            }
        }
    }

int main(){

 
    cin >> r >> c;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin >> grid[i][j]; 
        }
    }
    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<e;j++){
    //         cout <<  grid[i][j] << " "; 
    //     }
    //     cout << endl;
    // }

   int si , sj , ei , ej;
   cin >> si >> sj >> ei >> ej;
   memset(vis, false, sizeof(vis));
   memset(level, -1, sizeof(level));

//    dfs(si, sj);


    bfs(si , sj);
    cout << "(" <<  si << "," << sj << ")" << " to " << "(" <<  ei << "," << ej << ")" << " distance => " <<   level[ei][ej];
   


    return 0;
}