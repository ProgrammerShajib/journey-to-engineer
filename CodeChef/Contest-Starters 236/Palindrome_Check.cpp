#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }

        int l = 0, r = n-1;

        bool ans = true;
        while(l<r){
            if(v[l] == v[r]){
                l++ ;
                r--;
            }else if(v[l] == k){
                l++;
            }else if(v[r] == k){
                r--;
            }else {
                ans = false;
                break;
            }
        }

        if(ans ){
            cout << "Yes\n";
        }else {
            cout << "No\n";
        }


    }
    return 0;
}