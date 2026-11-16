#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> tabs(n + 1);
    int total_sum = 0;

    for (int i = 1; i <= n; i++) {
        cin >> tabs[i];
        total_sum += tabs[i];
    }

    int max_diff = 0;

    // b range: lower limit = 1, upper limit = n
    for (int b = 1; b <= n; b++) {
        int removed_sum = 0;

        // Collect elements deleted by selecting this b
        for (int c = b; c <= n; c += k) {
            removed_sum += tabs[c];
        }
        for (int c = b - k; c >= 1; c -= k) {
            removed_sum += tabs[c];
        }

        // Calculate |e - s| for the current b
        int current_diff = abs(total_sum - removed_sum);
        max_diff = max(max_diff, current_diff);
    }

    cout << max_diff << "\n";

    return 0;
}