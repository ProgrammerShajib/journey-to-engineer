#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long> a(n);
        for(auto &i : a)cin >> i;

        long long gcd1 = 0;
        long long gcd2 = 0;
        for(int i = 0;i<n;i+=2){
            gcd1 = __gcd(gcd1, a[i]);
        }
        for(int i = 1;i<n;i+=2){
            gcd2 = __gcd(gcd2, a[i]);
        }


        // cout << gcd1 <<" " << gcd2 << endl ;
        bool flag = true;
        for(int i = 1;i<n;i+=2){
            if(a[i] % gcd1 == 0){
                flag = false;
            }
        }

        // cout << flag << " ";
        long long ans = 0;
        if(flag){
            ans = gcd1;
        }else{
            flag = true;
            for(int i = 0;i<n;i+=2){
                if(a[i] % gcd2 == 0){
                    flag = false;
                }
            }

            // cout << flag << endl;
            if(flag){
                ans = gcd2;
            }
        }

        cout << ans << endl;
    }
    return 0;
}