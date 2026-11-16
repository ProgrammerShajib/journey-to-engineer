#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    int m;
    cin >> s >> m;

    vector<char> v;

    for (int i = 0; i < s.length(); i++) {
        // যদি ক্যারেক্টারটি সংখ্যা হয়
        if (s[i] >= '2' && s[i] <= '9') {
            int repeat = s[i] - '0';
            char lastChar = s[i-1];
            
            // সংখ্যা অনুযায়ী আগের অক্ষরটি পুশ করা
            for (int j = 0; j < repeat - 1; j++) {
                v.push_back(lastChar);
                if (v.size() >= m) break;
            }
        } 
        // যদি সাধারণ অক্ষর হয়
        else {
            v.push_back(s[i]);
        }

        // যদি অলরেডি m তম পজিশন পেয়ে যাই
        if (v.size() >= m) break;
    }

    cout << v[m-1] << endl;
    return 0;
}