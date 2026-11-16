#include <bits/stdc++.h>
using namespace std;
int x, y;
int memo[105][105];

int getMaxCoins(int day,int gp) {
    if (gp < 0 || gp > day) {
        return-1e9;
    }
    if (day == 0) {
        return 0;
    }
    if (memo[day][gp] !=-1) {
        return memo[day][gp];
    }

    int op1 = getMaxCoins(day-1,gp);
    int op2 = getMaxCoins(day-1,gp-1);

    int best = max(op1, op2);
    if (best < 0) {
        return memo[day][gp] =-1e9;
    }
    return memo[day][gp] = best +y *gp*gp;
}
void solve() {
    cin >>x>>y;
    for (int day = 1; day <= 100; day++) {
        memset(memo,-1, sizeof(memo));

        for (int gp = 0; gp <= day; gp++) {
            int total_coins = getMaxCoins(day, gp);
            int total_cost = gp * x;
            if (total_coins > total_cost) {
                cout << day << "\n";
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}