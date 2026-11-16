#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        while(true) {
            int max_id = -1;
            int max_val = -1; 
            for(int i = 1; i<n - 1; i++){
                if(a[i-1] > a[i] && a[i] < a[i+1]){
                    if(a[i] > max_val) {
                        max_val = a[i];
                        max_id = i;
                    }
                }
            }
            if(max_id == -1) {
                break;
            }         
            a[max_id - 1] = a[max_id];
            a[max_id + 1] = a[max_id];
        }
        long long sum = 0;  
        for(auto c : a){
            sum += c;
        }        
      cout << sum << "\n";
    }
    
    return 0;
}