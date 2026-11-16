#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;
    vector<tuple<int, int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a[i] = {x, y, z};
    }

    auto ok = [&](long long mid)
    {
        long long total_balloons = 0;

        for (int i = 0; i < n; i++)
        {
            long long t = get<0>(a[i]); // ১টি বেলুন ফুলাতে সময়
            long long z = get<1>(a[i]); // স্ট্যামিনা (একটানা কয়টা পারে)
            long long y = get<2>(a[i]); // রেস্ট নেওয়ার সময়

            long long cycle_time = (t * z) + y;
            long long full_cycles = mid / cycle_time;
            long long rem_time = mid % cycle_time;

            long long balloons_from_cycles = full_cycles * z;
            long long extra_balloons = min(rem_time / t, z);

            total_balloons += (balloons_from_cycles + extra_balloons);
        }

        return total_balloons >= m;
    };

    int l = -1, r = 2e9;
    while (r - l > 1)
    {
        int mid = l + (r - l) / 2;
        if (ok(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }

    cout << r << "\n";

    int rem_m = m;
    for (int i = 0; i < n; i++)
    {
        long long t = get<0>(a[i]);
        long long z = get<1>(a[i]);
        long long y = get<2>(a[i]);

        long long cycle_time = (t * z) + y;
        long long full_cycles = r / cycle_time;
        long long rem_time = r % cycle_time;

        long long balloons_from_cycles = full_cycles * z;
        long long extra_balloons = min(rem_time / t, z);

        long long his_balloons = balloons_from_cycles + extra_balloons;

        long long actual_give = min((long long)rem_m, his_balloons);
        cout << actual_give << " ";

        rem_m -= actual_give;
    }
    cout << "\n";

    return 0;
}