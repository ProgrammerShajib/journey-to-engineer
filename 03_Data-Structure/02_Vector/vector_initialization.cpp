#include<bits/stdc++.h>
using namespace std;
int main(){

    // vector<int > v;
    // vector<int> v(10);
    // v[8] = 19;
    // cout << v[8];
    // vector <int > v(10, 5);
    // vector <int > v2(v);
    // v2[3] = 0;

    // int n;
    // cin >> n;
    // vector <int > v(n);
    // for(int i =0;i<n;i++){
    //     cin >> v[i];
    // }
    int ar[5] = {1,2,3,4,5};
    vector<int>v(ar, ar+5);

    for(int i =0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}