#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;cin>> n;
    vector<int> v(n);
    for(auto &i : v)cin>> i;
    vector<int> cnt(n+1,0);
    int mx = 0, mx2 = 0;
    for(int i = 0;i<n;i++){
        if(v[i] > mx){
            mx2 = mx;
            mx = v[i];
            cnt[v[i]]--;
        }else if(v[i]>mx2){
            mx2 = v[i];
            cnt[mx]++;
        }
    }

    int best_element = 1;
    for(int i = 1;i<=n;++i){
        if(cnt[i] > cnt[best_element]){
            best_element = i;
        }
    }

    cout << best_element << endl;
    return 0;
}