#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int tc;cin >>tc;
    while(tc--){
        int n;cin>>n;
        // cout << n <<endl;
        vector<long long> a(n);
        for(auto &i : a)cin >> i ;
        vector<long long int> prefsum(n+1,0);
        for(int i = 1;i<=n;i++){
            prefsum[i] = prefsum[i-1]+a[i-1];
        }
        // for(auto c : prefsum) cout << c <<" " ;
        string s ;cin>> s;
        
        int l = 0, r= n-1;
        long long sum = 0;
        while(l<r){
            
            while(l<r && s[l] != 'L'){
                    l++;
                }
                while(l<r && s[r] != 'R'){
                        r--;
            }
        
            if(l<r){
                    sum += (prefsum[r+1] - prefsum[l]);
                l++ ;
                r--;
            }
        }
        cout << sum << endl;
        
        // cout << endl;
    }
    return 0;
}