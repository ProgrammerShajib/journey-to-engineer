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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l;
        cin >> l;         
        for(int i = 0;i<l;i++)
        {
            string s;
            cin >> s;             
            if(n != s.size()){
                cout <<"NO\n";
                
            }else{
                map<char,int> mp1;
                map<int,char> mp2;
                bool ans = true;
                for(int i = 0;i<s.size();i++){
                    char c = s[i];
                    int a = v[i];
                    if(mp1.find(c) == mp1.end() && mp2.find(a) == mp2.end()){

                        mp1[c] = a;
                        mp2[a] = c;
                    }else {
                        if((mp1.count(c) &&  mp1[c] != a) || (mp2.count(a) && mp2[a] != c)){
                            ans = false;
                            break;
                        }
                    }
                }

                if(ans){
                    cout <<"YES\n";
                }else{
                    cout << "NO\n";
                }
            }
        }
        
    }
    return 0;
}