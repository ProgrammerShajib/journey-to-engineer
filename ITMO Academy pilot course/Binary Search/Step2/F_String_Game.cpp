#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    string t, p;
    cin>> t>> p;
    vector<int> a(t.size());
    for(auto &i: a)cin >> i;
    auto ok = [&](int mid){
        vector<bool> v(t.size(), true);
        for(int i = 0;i<mid;i++){
            v[a[i]-1] = false;
        }

        int j = 0;
        for(int i = 0 ;i<t.size();i++){
            if(v[i] && (t[i] == p[j])){
                j++;
                if(j == p.size()){
                    return true;
                }
            }
        }

        return false;
        
    };
    int l = 0, r = t.size()+1;
    while(r - l > 1){
        int mid = l + (r-l)/2;
        if(ok(mid)){
            l = mid;
        }else{
            r = mid;
        }
    }

    cout << l ;
    return 0;
}