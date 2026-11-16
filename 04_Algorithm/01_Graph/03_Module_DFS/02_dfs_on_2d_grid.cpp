#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
    int r, c;
// initialy storing the up , doun and left , right value so we can easily access them
vector<pair<int, int>> v = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int ci, int cj){

    if(ci< 0 || ci >= r || cj <0 || cj >= c ){
        return false;
    }
    return true;
}

void dfs(int si, int sj)
{

    // here si and sj are source index
    cout << si << " " << sj << "\n";
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        // here ci and cj are children index

        int ci = si + v[i].first;
        int cj = sj + v[i].second;
        // cout << ci << " " << cj << endl;
        if(valid(ci , cj) == true && !vis[ci][cj]){
            dfs(ci, cj);
        }
    }
}

int main()
{

  
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> grid[i][j];
        }
    }
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {

    //         cout << grid[i][j];
    //     }
    //     cout << "\n";
    // }

    int si, sj; // here si and sj is the source index
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);

    return 0;
}