#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        long long  n;cin>> n;
        vector<long long > a(n);
        for(auto &i : a)cin >> i;
        sort(a.begin(), a.end());
        // cout  << a[0] << endl;

        long long mn = a[0];
        vector<long long > multiple;
        for(long long  i = 1;i<n;i++){

            if(a[i] % mn == 0){
                multiple.push_back(a[i]);
            }
        }

        long long  gc = 0;
        for(auto i : multiple) gc = __gcd(i, gc);

        // for(auto i : multiple ) cout << i << " ";
        // for(int i = 0;i<multiple.size();i++){
        //     cout << multiple[i] <<" " << gc << " = ";
        //     gc = __gcd(multiple[i], gc ) ;
        //     cout << gc <<endl;
        // }

        // cout << gc << endl;

        if(gc == mn) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}