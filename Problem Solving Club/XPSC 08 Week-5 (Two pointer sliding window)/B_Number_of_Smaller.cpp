#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int a,b;
    cin >> a >> b;
    vector<int > v(a), v2(b);
    for(auto & i : v)cin >> i;
    for(auto & i : v2)cin >> i;

    int l = 0,r = 0 , cnt = 0;
    // vector<int > ans(b) ;
    while(r<b){

        if(l<a && v[l] < v2[r]){
            l++;
            cnt++;
        }else{
            // ans[r] = cnt;
            cout << cnt <<" ";
            r++;
        }
    }

    // for(auto c : ans) cout << c << " ";


    return 0;
}