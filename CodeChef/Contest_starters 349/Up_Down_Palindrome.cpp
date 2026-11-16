#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int n;cin>> n;
        vector<int> a(n);
        for(auto &i:a)cin >>i;
        int i = 0, j = n-1;
        int l = 0, r = 1e9+7;
        int dif = abs(a[i]-a[j]);
        bool ok = true;
        while(i <j){
            if(a[i] != a[j]){
                int diff = abs(a[i]-a[j]);
                if(diff != 2){
                    ok = false;
                    break;
                }else{
                    int mn = min(a[i],a[j]);
                    l = max(l,mn);
                    r = min(r,mn+1);
                }
            }
            
            i++;
            j--;
        }
        
        if(ok && l <= r){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
}
