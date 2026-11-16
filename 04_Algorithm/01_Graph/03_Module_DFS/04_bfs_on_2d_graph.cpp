#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
int dis[105][105];
pair<int, int> parent[105][105];
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

        // cout << parent_i << " " << parent_j << "\n";
        // here this loop is fixed because we only can go 4 side from a node in this example
        for (int i = 0; i < 4; i++)
        {
            int ci = parent_i + v[i].first;
            int cj = parent_j + v[i].second;

            // here grid[ci][cj] == '.' is used for cheking the grid value it can be anything what you give in input
            if (vaild(ci, cj) == true && !vis[ci][cj] &&  grid[ci][cj] != '#')
            {
                // ekane ci and cj hosse child node er index
                q.push({ci, cj});
                // child node ta je visited hoye gese tai true kore dilam
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
    int si =-1, sj =-1, di =-1, dj =-1;
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

    // cout << di << " " << dj << "\n"
    //      << si << " " << sj << "\n";
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    if(si != -1  && sj != -1){

        bfs(si, sj);
    }
    // cout << dis[di][dj] << "\n";

    if (di != -1 && dj != -1 && vis[di][dj])
    {
        vector<pair<int, int>> path;
        pair<int, int> curr = {di, dj};
        while (curr.first != -1)
        {

            path.push_back(curr);
            curr = parent[curr.first][curr.second];
        }

        // reverse(path.begin(), path.end());

        // cout << "Path: ";
        // for (auto p : path)
        //     cout << "(" << p.first << "," << p.second << ") \n";
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

    cout << dis[di][dj];
    return 0;
}