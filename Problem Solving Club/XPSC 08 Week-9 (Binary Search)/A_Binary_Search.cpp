#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    while(k--){
        int q, mid, l = 0 , r = n-1;
        bool found = false;
        cin >> q;
        

        while(l <= r){

            mid = (l+r)/2;
            
            if(a[mid] == q){
                found = true;
                break;
            }else if(q > a[mid]){
                l = mid+1;
            }else{
                r = mid-1;
            }


        }

        if(found){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}