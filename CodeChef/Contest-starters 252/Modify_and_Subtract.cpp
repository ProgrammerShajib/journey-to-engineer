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

        vector<long long> A(N + 1);
        for (int i = 1; i <= N; i++)
        {
            cin >> A[i];
        }

        int l_cr = N;  
        vector<long long> L(N + 1, 0);
        L[1] = A[1];
        
        for (int i = 2; i <= N; i++)
        {
            L[i] = A[i] - L[i - 1];
            if (L[i] < 0) 
            {
                l_cr = i;
                break; 
            }
        }

        int r_cr = 1;  
        vector<long long> R(N + 1, 0);
        R[N] = A[N];
        
        for (int i = N - 1; i >= 1; i--)
        {
            R[i] = A[i] - R[i + 1];
            if (R[i] < 0)  
            {
                r_cr = i;
                break; 
            }
        }

        cout << l_cr <<" "  << r_cr << endl;
        int ans = 0;
        if (l_cr >= r_cr)  
        {
            ans = l_cr - r_cr + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}