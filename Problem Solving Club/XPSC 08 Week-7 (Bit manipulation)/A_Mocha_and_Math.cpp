#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(auto &c : a) cin >> c ;

        int sum = a[0];
        for(int i = 1;i<n;i++){
            sum &= a[i];
        }
        cout << sum << endl;
    }
    return 0;
}