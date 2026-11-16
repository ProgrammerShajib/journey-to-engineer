#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    long long t;
    cin>> t;
    while(t--){
        long long n;cin>>n;
        vector<long long> a(n);
        for(auto &c : a) cin>> c;

        for(long long i = 0;i<n-1;i++){
            if(a[i]< a[i+1] -1){
                a[i]++;
            }else if(a[i] -1> a[i+1] ){
                a[i+1]++;
            }
        }   


        long long ans = 0;
        for(long long i = 0;i<n;i++){
            ans = ans | a[i];
        }

        cout << ans << endl;
    }
    return 0;
}