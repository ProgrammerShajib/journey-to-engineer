#include<bits/stdc++.h>
using namespace std;
int main(){

    // vector string
    vector<string> s;
    string a ;
    while(getline(cin, a)){  // it will take the input untill the input ends;
        s.push_back(a);
    }

    for(int i =0;i < s.size();i++){
        cout << s[i] << endl;
    }
    return 0;
}