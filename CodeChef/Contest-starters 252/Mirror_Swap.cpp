#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        int total = 2 * N;
        vector<int> A(total);

        for (int i = 0; i < total; i++)
        {
            cin >> A[i];
        }
        long long mx_f_half = 0;

        for (int i = 0; i < N; i++)
        {
            int mirror_ind = total - 1 - i;
            mx_f_half += max(A[i], A[mirror_ind]);
        }

        cout << mx_f_half << "\n";
    }
    return 0;
}