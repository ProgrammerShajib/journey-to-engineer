#include<bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    while(t--){
        int n, m; 
        cin >> n >> m;
        
        vector<int> a(n);
        int sum_a2 = 0;  
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum_a2 ^= a[i];
        }
        
        int sum_b = 0;  
        for(int i = 0; i < m; i++){
            int val;
            cin >> val;
            sum_b |= val;
        }
       
        int sum_a = 0;  
        for(auto c : a){
            sum_a ^= (c | sum_b);
        }

        if(n % 2 == 0){
            cout << sum_a << " " << sum_a2 << "\n";
        } else {
            cout << sum_a2 << " " << sum_a << "\n";
        }
    }
    return 0;
}