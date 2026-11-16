#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin >> s;
    vector<int>v(256, 0);
    for(int i =0;i<(int) s.length();i++){
        v[s[i]]++;
    }

    int duplicate = 0;
    for(int i = 0;i<(int) s.length();i++){
        if(v[s[i]] == 1){
            cout << s[i];
            duplicate = 1;
            break;
        }
    }

    if(duplicate == 0){
        cout << -1;
    }

    
    return 0;
}