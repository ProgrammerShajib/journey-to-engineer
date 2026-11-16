#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> v(n, -1);
    v.resize(3);
    for(int i = 0;i<v.size();i++){
        cin >> v[i] ;
    }
    sort(v.begin(), v.end(), greater<int>() );
    for( auto i : v){
        cout << i <<" " ;
    }
    return 0;
}