#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    set<string> st;
    map<string, int> mp;
    vector<string> v;
    while (n--)
    {
        string s;
        cin >> s;
        if (st.empty())
        {
            st.insert(s);
            mp.insert({s,0}); 
            v.push_back("OK");
        }
        else
        {
            if (st.find(s) != st.end())
            {
                mp[s]++;
                int nm = mp[s];
                string s2 = s + to_string(nm);
                v.push_back(s2);

            }
            else
            {
                st.insert(s);
                mp.insert({s,0}); 
                v.push_back("OK");
            }
        }
    }
    for(auto c : v){
        cout << c <<"\n";
    }
    return 0;
}