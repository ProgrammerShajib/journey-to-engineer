#include<bits/stdc++.h>
using namespace std;
int main(){


    vector<pair<int , int>> v(5);
    // v[0].first = 3;
    // v[0].second = 5;
    for(int i = 0;i<5;i++){
        cin >> v[i].first >> v[i].second;
    }
    for(int i = 0;i<5;i++){
  
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}