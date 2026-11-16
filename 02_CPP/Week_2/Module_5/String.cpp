#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "Hello This is Sajib . Wellcome to the Real world where everyting is in your way.";

    // cout << s.size() ;
    // cout << s.max_size();
    // cout << s.capacity();
    // s.clear();
    // cout << s.size() ;
    // if(s.empty() == true){
    //     cout << "Empty" <<endl ;
    // }else{
    //     cout << "Not Empty" << endl;
    // }

    s.resize(90, '9');
    cout << s;
    return 0;
}