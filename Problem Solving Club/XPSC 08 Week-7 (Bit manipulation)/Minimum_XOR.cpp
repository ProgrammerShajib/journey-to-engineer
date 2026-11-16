#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>  a(n);
        
        int totalXor = 0;
        
        for(int i= 0; i <n;i++){
            cin >> a[i];
            totalXor = (totalXor ^ a[i]);
        }

        int minXor = totalXor;
        int maxXor = totalXor;

        for(int i = 0;i<n;i++){
            int currXor = totalXor ^ a[i];
            minXor = min(minXor , currXor);
            maxXor = max(maxXor, currXor);

        }
        cout << minXor <<endl;
    }
    return 0;
}