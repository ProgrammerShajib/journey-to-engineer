#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        ll K;
        cin >> N >> K;
        vector<ll> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        ll curr_sum = 0;
        ll max_cost = 0;
        int max_bought = 0;
        for (int i = 0; i < N; i++)
        {
            curr_sum += A[i];
            max_cost = max(max_cost, A[i]);
            if (curr_sum - max_cost <= K)
            {
                max_bought = i + 1;
            }
            else
            {
                break;
            }
        }
        cout << max_bought << "\n";
    }
    return 0;
}