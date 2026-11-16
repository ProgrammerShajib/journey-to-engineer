#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n,q, cnt= 1;
    cin >> n >> q;
    while(n && q){
        cout << "CASE# " << cnt <<":\n";
        cnt++;


        vector<int> a(n);
        for(auto &i : a) cin >> i ;
        sort(a.begin(), a.end());
        // for(auto c : a) cout << c <<" ";
        // cout << endl;
        for(int i =1;i<=q;i++){
            int k;cin>> k;
            // cout << k << " ";
            auto pos = lower_bound(a.begin(), a.end(), k) - a.begin();
            if(k != a[pos]){
                cout << k <<" not found\n";
            }else{
                cout << k <<" found at " << pos+1 <<"\n";
            }
            // cout << a[pos] <<endl;

        }

        cin >> n >> q;
         
    }
    return 0;
}