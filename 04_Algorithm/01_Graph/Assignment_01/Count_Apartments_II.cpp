#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
int room = 0;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    room++;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(vis, false, sizeof(vis));
    int cnt = 0;
    vector < int > room_num;
    for(int i =0;i<n;i++){
        for(int j =0;j<m ;j++){
            if(!vis[i][j] && grid[i][j] == '.'){
                cnt++;
                dfs(i,j);
             
                room_num.push_back(room);
                room = 0;
                
            }
        }
    }
    if(room_num.size() == 0){
        cout << 0;
    }else{

        sort(room_num.begin(), room_num.end());
        for(auto r: room_num){
            cout << r <<" ";
        }
    }
 
    return 0;
}