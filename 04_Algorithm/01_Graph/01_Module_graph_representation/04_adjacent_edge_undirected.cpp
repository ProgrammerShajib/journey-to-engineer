#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,e;
    cin >>n >>e;
    vector<pair<int,int>> eadge_list;
    while(e--){
        int a, b;
        cin >> a >> b;
        eadge_list.push_back({a,b});
        
    }
    // for(pair<int,int> p : eadge_list){
    //     cout << p.first << " " << p.second << endl;
    // }
    for(auto p : eadge_list){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}