#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        map<int,int> mp;
        set<int> s;
        for(int i = 0;i<n; i++){
            int c;
            cin >> c;
            mp[c]++;
            s.insert(c);
            s.insert(c+1);
        }
        int l = 0;
        int r = 0;
        for(auto c: s){
            int a = mp[c];
            r += max(0,a - l);
            l = a;
        }

        cout << r << "\n";
    }
    return 0;
}