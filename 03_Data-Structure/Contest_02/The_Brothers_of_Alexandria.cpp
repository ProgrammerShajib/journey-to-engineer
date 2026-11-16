#include<bits/stdc++.h>
using namespace std;
int main(){

    int a, b;
    cin >> a >> b;
    vector<int> v;
    while(a--){
        int val ;
        cin >> val;
        v.push_back(val);
    }

    sort(v.begin(), v.end());

    cout << v[b-1];
    return 0;
}