#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

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
        
        vector<int> count(N + 2, 0);
        for (int i = 0; i < N; i++)
        {
            int val;
            cin >> val;
            if (val <= N + 1) { 
                count[val]++;
            }
        }

        // ২ এর পাওয়ারগুলো আগে থেকেই হিসাব করে রাখছি
        vector<long long> pow2(N + 2, 1);
        for (int i = 1; i <= N + 1; i++)
        {
            pow2[i] = (pow2[i - 1] * 2) % MOD;
        }

        long long ans = 0;
        long long prefix_ways_A = 1; // 0 থেকে M-1 পর্যন্ত সংখ্যাগুলো অন্তত একবার নেওয়ার উপায়
        long long prefix_ways_B = 1; // 0 থেকে M-2 পর্যন্ত সংখ্যাগুলো অন্তত একবার নেওয়ার উপায়

        for (int M = 0; M <= N; M++)
        {
            if (count[M] > 0)
            {
                long long ways_M = (pow2[count[M]] - 1 + MOD) % MOD;
                
                // Case 1: mex = M + 1 (0 থেকে M পর্যন্ত সব আছে)
                long long type_A = (ways_M * prefix_ways_A) % MOD;
                ans = (ans + type_A) % MOD;
                
                // Case 2: mex = M - 1 (0 থেকে M-2 আছে, M-1 নেই, M আছে)
                if (M >= 1)
                {
                    long long type_B = (ways_M * prefix_ways_B) % MOD;
                    ans = (ans + type_B) % MOD;
                }
            }
            
            // পরবর্তী ধাপে (M+1 এর জন্য) প্রি-ক্যালকুলেটেড মানগুলো আপডেট করা
            long long ways_current = (pow2[count[M]] - 1 + MOD) % MOD;
            prefix_ways_B = prefix_ways_A; 
            prefix_ways_A = (prefix_ways_A * ways_current) % MOD;
        }

        cout << ans << "\n";
    }
    return 0;
}