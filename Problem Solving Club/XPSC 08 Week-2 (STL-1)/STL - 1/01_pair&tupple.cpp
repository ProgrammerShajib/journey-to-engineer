#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    // Container
    pair<string, int> p = {"shajib", 52};

    auto [name, roll] = p;
    cout << name <<" " << roll;
    int n;
    cin >> n;
    pair<string, int> student[n];
    // for(int i = 0;i<n ;i++){
    //     cin >> student[i].first >> student[i].second;
    // }

    // for(auto [x,y] : student){
    //     // cout << x << " " << y << endl;
    
    // }
    // for(auto c : student){
    //     cout << c.first << " " << c.second << endl;
    // }


 tuple<string, int, pair<string, int>> p2 = {"Shajib", 52, {"GPA", 4}};

    auto [name2, rool, d] = p2;

    cout << name2 << " " << rool << " "<< d.first << " " << d.second << endl;


    
    return 0;
}