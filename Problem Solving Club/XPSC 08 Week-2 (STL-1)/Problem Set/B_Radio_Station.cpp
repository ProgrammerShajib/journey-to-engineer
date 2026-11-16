#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    map<string, string> mp;
    map<string, string> cmp;
    while (n--)
    {
        string name, ip;
        cin >> name >> ip;
        mp.insert({ip, name});
        cmp.insert({name, ip});
    }

    while (m--)
    {
        string cmd, ip;
        cin >> cmd >> ip;
        int l = ip.length();
        string s = ip.substr(0, l - 1);
        if (mp.find(s) != mp.end())
        {

            cout << cmd << " " << ip << " #" << mp[s] << "\n";
        }
    }
    return 0;
}