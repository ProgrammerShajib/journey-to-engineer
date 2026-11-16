#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int dis[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, e;
bool vaild(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= e)
    {
        return false;
    }
    return true;
}

void bfs(int si, int sj)
{

    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    parent[si][sj] = {-1, -1};
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int parent_i = par.first, parent_j = par.second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = parent_i + v[i].first;
            int cj = parent_j + v[i].second;

            if (vaild(ci, cj) == true && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D'))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                // ekane child er level/ dis hobe parent er level / dis sate 1 besi
                dis[ci][cj] = dis[parent_i][parent_j] + 1;
                parent[ci][cj] = {par.first, par.second};
            }
        }
    }
}
int main()
{

    cin >> n >> e;
    int si = -1, sj = -1, di = -1, dj = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    if(si != -1 && sj != -1){

        bfs(si, sj);
    }

    if (di != -1 && dj != -1 && vis[di][dj])
    {
        vector<pair<int, int>> path;
        pair<int, int> curr = {di, dj};
        while (curr.first != -1)
        {

            path.push_back(curr);
            curr = parent[curr.first][curr.second];
        }
    }

    if (vis[di][dj])
    {
        pair<int, int> curr = {di, dj};
        while (curr.first != -1)
        {

            if (grid[curr.first][curr.second] != 'R' && grid[curr.first][curr.second] != 'D')
            {
                grid[curr.first][curr.second] = 'X';
            }
            curr = parent[curr.first][curr.second];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cout << grid[i][j];
        }
        cout << "\n";
    }
    return 0;
}