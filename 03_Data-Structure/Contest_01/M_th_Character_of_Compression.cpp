#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    int m;
    cin >> s >> m;
    vector<char> v;

    for(int i = 0 ;i<s.length();i++){
        if(s[i] >='2' && s[i] <= '9'){
            int add = s[i] - '0';
            char lastchar = s[i-1];

            for(int j =0;j <add-1;j++){
                v.push_back(lastchar);
                
            }
        }else{
            v.push_back(s[i]);
        }

    
    }

    cout << v[m-1] << endl;
    return 0;
}