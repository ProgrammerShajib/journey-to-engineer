#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
    }
    vector<int> tm(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> tm[i];
    }
    int lastDeparture = 0;
    int arrivalTime = 0;
    for (int i = 1; i <= n; i++) {
 
        int travelTime = (a[i] - b[i-1]) + tm[i];
        arrivalTime = lastDeparture + travelTime;
        int waitTime = (b[i] - a[i] + 1) / 2;
        if (i < n) {
            lastDeparture = max(b[i], arrivalTime + waitTime);
        }
    }
    cout << arrivalTime << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}