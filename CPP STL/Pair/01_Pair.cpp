#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    pair<int,string> p;
    p = {2, "a"};
    // cout << p.first << " " << p.second;
    pair<int,string> &p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second;
    


    return 0;
}