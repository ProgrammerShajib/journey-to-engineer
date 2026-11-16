#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    vector<int> v(a), v2(b);
    for(int i = 0;i<a ;i++){
        int val;cin >> val;
        v[i] = val;
    }
    for(int i = 0;i<b ;i++){
        int val;cin >> val;
        v2[i] = val;
    }

    
 
    int l = 0, r=0;
    long long ans = 0;
    while(l<a && r<b){
        int curr = v[l], cnt1 = 0, cnt2 = 0;
        while( l < a && v[l] == curr){
            l++;
            cnt1++;
        }
        while(r < b && curr > v2[r]){
            r++;
        }
        while(r<b && v2[r] == curr){
            r++;cnt2++;
        }

        ans += (1ll * cnt1 * cnt2);
    }
    cout << ans << "\n";

    return 0;
}