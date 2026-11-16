#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v = {1, 2,3,4,5};

    vector<int > v2(v.size());

    // cout << v2.size();

    v2[0]= v[0];
    for(int i =1;i<v.size();i++){
        v2[i] = v2[i-1] + v[i]; 
    }

    for(int i =0;i<v.size();i++){
        cout << v2[i] << " ";
    }

    return 0;
}