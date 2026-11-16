#include<bits/stdc++.h>
using namespace std;

int get_first_ge(int d, vector<int> &v){
    int l = -1, r = v.size();
    while(r - l > 1){
        int mid = l + (r - l) / 2;
        if(v[mid] < d){
            l = mid;
        } else {
            r = mid;
        }
    }
    return r;  
}

int get_first_gt(int d, vector<int> &v){
    int l = -1, r = v.size();
    while(r - l > 1){
        int mid = l + (r - l) / 2;
        if(v[mid] <= d){  
            l = mid;
        } else {
            r = mid;
        }
    }
    return r;  
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t; cin >> t;
    vector<int> a(t);
    for(auto &i : a) cin >> i;
    
    sort(a.begin(), a.end());
    
    int k; cin >> k;
    while(k--){
        int c, b; cin >> c >> b;
        
        int count = get_first_gt(b, a) - get_first_ge(c, a);
        cout << count << " ";
    }
    cout << "\n";
    
    return 0;
}