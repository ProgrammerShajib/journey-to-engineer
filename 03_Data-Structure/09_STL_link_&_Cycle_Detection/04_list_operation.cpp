#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int> l = {11,2,32, 62,27,32,32};
    
    // l.remove(32);
    // l.sort();
    // l.sort(greater<int>());
    // l.unique();
    l.reverse();

    for(int c : l){
        cout << c <<endl;
    }
    return 0;
}