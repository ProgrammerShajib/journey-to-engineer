#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s = "Hello Sajib";
    // for(int i =0; i<s.size();i++){
    //     cout << s[i] << endl;
    // }

    int i = 0;
    for (auto it = s.begin(); it < s.end(); it++)
    {

        cout << i + 1 << " = " << *it << endl;
        i++;
    }
    return 0;
}