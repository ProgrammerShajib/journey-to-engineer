#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;

    set<char> st;
    for (auto c : s)
    {

        st.insert(c);
    }
    
    char found = '0';
    for(int i = 0;i<26;i++){
        
        char a1 = 'a'  + i;
        if(st.find(a1) == st.end()){
            found = a1;
            break;
        }
        
    }

    if (found != '0')
    {
        cout << found;
    }
    else
    {
        cout << "None";
    }

    return 0;
}