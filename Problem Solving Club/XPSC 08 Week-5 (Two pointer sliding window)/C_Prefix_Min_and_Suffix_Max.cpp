#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >>n;
    vector<int> v;
    for(int i = 0;i<n;i++){
        int a;cin>> a;
        v.push_back(a);
    }
    vector<int> mn;
    int m = 1e9;
    for(int i = 0;i<n;i++){

        
        if(v[i]<m){
            m = v[i];
            mn.push_back(m);
        }else{
            mn.push_back(m);
        }
    }
    vector<int> mx(n);
    int mi = -1;
    for(int i = n-1;i>=0;i--){

        
        if(v[i]>mi){
            mi = v[i];
            mx[i] = mi;
        }else{
            mx[i] = mi;
        }
    }
    string s="";
    for(int i =0;i<n;i++){
        if(v[i] == m || v[i] == mi){
            s += '1';
        }else if(v[i] <=mn[i] ||v[i] >= mx[i] ){
            s+= '1';
        }else{
            s += '0';
        }
    }

    cout << s << endl;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}