#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    vector<int> pref_val(n, 0);
    int current_score = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1 || a[i] == 2) {
            current_score += 1;
        } else {
            current_score -= 1;
        }
        pref_val[i] = current_score;
    }

    vector<int> suff_max(n, -1e9);
    if (n >= 2) {
        suff_max[n - 2] = pref_val[n - 2];
        for (int i = n - 3; i >= 0; i--) {
            suff_max[i] = max(pref_val[i], suff_max[i + 1]);
        }
    }

    int c1 = 0, c2 = 0, c3 = 0;
    bool possible = false;

    for (int p1 = 0; p1 <= n - 3; p1++) {
        if (a[p1] == 1) c1++;
        else if (a[p1] == 2) c2++;
        else c3++;

        if (c1 >= c2 + c3) {
            if (suff_max[p1 + 1] >= pref_val[p1]) {
                possible = true;
                break;
            }
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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