#include<bits/stdc++.h>
using namespace std;


bool ok(int &id, vector<int> &v, int &mid, string &s, string &s2){
    vector<bool> del(id,0);
    for(int i = 0;i<mid;i++){
        del[v[i]] = true;
    }

    int cnt = 0;
    for(int i = 0;i<id;i++){
        if(!del[i]){
            if(s[i] == s2[cnt]){
                cnt++;
            }

            if(cnt == s2.size()){
                return true;
            }
        }
    }

    return false;

   
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    string s, s2;cin>> s>> s2;
    int t = s.size();
 
    vector<int> v(t);
    for(int i = 0;i<t;i++){
        cin >> v[i];
        v[i]--;
    }
 

    int l = 0, r = t, mid, ans, d = t;
    while(l <= r){

        mid = l + (r-l)/2;

        bool k = ok(d, v, mid, s, s2);
        if(k){
            ans = mid;
            l = mid + 1;

        }else{
            r = mid - 1;
        }
    }

    cout << ans;

    return 0;
}