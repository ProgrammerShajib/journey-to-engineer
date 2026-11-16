#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    if(cin >> n){
        vector<ll> a(n);
        ll max_value = LLONG_MIN , total_sum=0; 
     
        for(auto &i : a) if(cin >> i) {total_sum += i; max_value = max(max_value, i);}

        ll total_subsets = 1 << n;
        ll min_diff = 1e18;

        for(int mask = 0 ; mask < total_subsets; mask++){

            ll current_sum  = 0;
            for(int i  = 0;i<n;i++){

                if((mask & (1 <<i)) != 0){
                    current_sum += a[i];
                }
            }

            ll sum1 = current_sum;
            ll sum2 = total_sum - current_sum;
            ll diff = abs(sum1 - sum2);
            min_diff = min(min_diff, diff);

        }

        cout << min_diff;
    }
    return 0;
}