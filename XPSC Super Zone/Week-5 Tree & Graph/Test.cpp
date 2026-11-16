#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Direction vectors for moving Up, Down, Left, Right
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int dfs(int r, int c, int n, int m, vector<vector<int>>& grid) {
    // Base condition: check grid boundary and zero cells
    if (r < 0 || r >= n || c < 0 || c >= m || grid[r][c] == 0) {
        return 0;
    }

    int current_val = grid[r][c];
    grid[r][c] = 0; // Mark as visited by setting depth to 0

    int total_volume = current_val;
    for (int i = 0; i < 4; ++i) {
        int nr = r + dx[i];
        int nc = c + dy[i];
        total_volume += dfs(nr, nc, n, m, grid);
    }

    return total_volume;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    int max_lake_volume = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] > 0) {
                int current_lake_volume = dfs(i, j, n, m, grid);
                max_lake_volume = max(max_lake_volume, current_lake_volume);
            }
        }
    }

    cout << max_lake_volume << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}