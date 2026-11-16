#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

bool good(int64 x) {
    bool vis[10] = {};
    int cnt = 0;

    while (x) {
        int d = x % 10;
        if (!vis[d]) {
            vis[d] = true;
            cnt++;
            if (cnt > 2) return false;
        }
        x /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int64> cand;

    for (int d = 1; d <= 9; d++) {
        int64 num = 0;
        for (int len = 1; len <= 10; len++) {
            num = num * 10 + d;
            if (num >= 2 && num <= 1000000000LL)
                cand.push_back(num);
        }
    }

    int T;
    cin >> T;

    while (T--) {
        int64 x;
        cin >> x;

        for (int64 y : cand) {
            if (good(x * y)) {
                cout << y << '\n';
                break;
            }
        }
    }
}