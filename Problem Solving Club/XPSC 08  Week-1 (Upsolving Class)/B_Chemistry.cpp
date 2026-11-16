#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, r;
        cin >> n >> r;

        string s;
        cin >> s;
        int freq[26] = {0};

        for (char c : s)
            freq[c - 'a']++;

        int odd = 0;

        for (int i = 0; i < 26; i++)
            if (freq[i] % 2 == 1)
                odd++;

        if (odd - r <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}