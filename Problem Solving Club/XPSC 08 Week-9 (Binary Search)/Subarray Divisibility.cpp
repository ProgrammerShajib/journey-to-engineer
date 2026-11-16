#include<bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> rem_freq(n, 0);
    rem_freq[0] = 1;  

    long long current_sum = 0;
    long long total_subarrays = 0;

    for (int i = 0; i < n; i++) {
        current_sum += a[i];

        int rem = ((current_sum % n) + n) % n;

        total_subarrays += rem_freq[rem];

        rem_freq[rem]++;
    }

    cout << total_subarrays << "\n";

    return 0;
}