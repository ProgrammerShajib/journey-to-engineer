#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v;
        v.push_back(a);
        v.push_back(c);
        v.push_back(b);
        sort(v.begin(), v.end());

        if(v[0] + v[1] <= v[2]  ) {
            cout << v[2] - (v[1]+v[0]) +1 << endl;
        }else{
            cout << 0 << endl ;
        }
    }
    return 0;
}