#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;

        string s;
        cin >> s;
        set<char> st;
        vector<char> v;
        queue<char> q;
        for (auto c : s)
        {
            st.insert({c});
            q.push(c);
        }
        for (auto c : st)
        {
            v.push_back(c);
        }
        vector<pair<char, char>> v2;
        map<char, char> mp;
        int len = v.size() - 1;
        for (int i = 0; i <= len; i++)
        {
            v2.push_back({v[i], v[len - i]});
            mp.insert({v[i], v[len - i]});
        }
        string s2 = "";
        for (auto c : s)
        {
            char d = mp[c];
            s2 += d;
        }

        cout << s2 << endl;
    }
    return 0;
}