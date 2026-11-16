#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int> li ={1,2,3,4,5,6,7};
    list<int> li2(li);

    int ar[] = {1,2,3,4,5,6,7};
    list<int> li3(ar, ar+7);

    vector<int> v = {1,2,3,4,5,6,7};
    list<int> li4(v.begin(), v.end());
    
    // for(auto it= li.begin();it != li.end();it++){
    //     cout << *it << endl;
    // }

    for(int c : li4){
        cout << c <<endl;
    }
    return 0;
}