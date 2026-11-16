#include<bits/stdc++.h>
using namespace std;

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int  dfs(int r, int c , int n, int m, vector<vector<int>>&grid){
    

    if(r<0 || r>= n || c>= m || c<0 || grid[r][c] == 0){
        return 0;
    }
    int current_val = grid[r][c];
    grid[r][c] =0;

    int total_volume = current_val;
    for(int i = 0;i<4;++i){
        int nr = r+dx[i];
        int nc = c+dy[i];
        total_volume += dfs(nr,nc,n,m,grid);
    }

    return total_volume;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n, m;
        cin>> n >> m;
        vector<vector<int>> grid(n,vector<int>(m));
        for(int i = 0;i<n;++i){
            for(int j= 0;j<m;++j){
                cin>> grid[i][j];
            }
        }

        int max_lack_vol=0;

        for(int i = 0;i<n;++i){
            for(int j = 0;j<m;++j){
                int current_lack_volume = dfs(i, j , n, m, grid);
                max_lack_vol = max(max_lack_vol, current_lack_volume);

            }
        }

        cout << max_lack_vol <<"\n";
    }
    return 0;
}