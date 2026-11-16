#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin , s);
    // cout << s ;
    
    stringstream ss(s);
    string word;
    map<string, int> mp;

    while( ss >> word){
        // cout << word << "\n";
        mp[word]++;
    }

    for(auto it = mp.begin() ;it != mp.end() ; it++ ){
        cout << it->first <<"-> " << it->second << endl;
    }
    return 0;
}