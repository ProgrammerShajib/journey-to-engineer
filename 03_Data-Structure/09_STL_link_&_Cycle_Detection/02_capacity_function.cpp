#include<bits/stdc++.h>
using namespace std;
int main(){

     vector<int> v = {1,2,3,4,5,6,7};
    list<int> li4(v.begin(), v.end());
    
    cout << li4.size() << endl;
    // cout << li4.max_size();
    li4.clear();
    cout << li4.size() << endl ;
    if(li4.empty()){
        cout << "Empty."<< endl;
    }

    li4.resize(5,100);

    for(int c : li4){
        cout << c <<endl;
    }
    return 0;
}