#include <bits/stdc++.h>
using namespace std;

void solve() {
 
    int n,k;cin>> n >> k;
    string a;
    cin>> a;

    int c0 = 0, c1 = 0;
     
    for(auto c : a){
        if(c =='0'){
            c0++;
        }else{
            c1++;
        }
    }
    if(c0 <k || c1 < k){
        cout << a <<"\n";
    }else if( n == 2*k){
        string b = a;
        for(int i = 0;i<n;i++){
            if(a[i] == '0'){
                b[i]= '1';
            }else{
                b[i] = '0';
            }
        }
        cout << min(a,b) <<"\n";
    }else{
        string ans = "";
        for(int i = 0;i<c0;i++) {
            ans += '0';
        }
        for(int i = 0;i<c1;i++) {
            ans += '1';
        }

        cout  << ans <<"\n";

    }
     
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}