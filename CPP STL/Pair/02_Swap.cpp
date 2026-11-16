#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    pair<int,int>p[3];
    p[0] = {1,2};
    p[1] = {2,3};
    p[2] = {3,4};

    // swap(p[0], p[2]);
    for(auto c : p){
        cout << c.first <<" " << c.second <<endl;
    }
    return 0;
}