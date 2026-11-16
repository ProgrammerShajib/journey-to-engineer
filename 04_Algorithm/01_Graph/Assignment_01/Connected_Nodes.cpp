#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
 
int main()
{

    ios_base::sync_with_stdio(false); // Fast I/O
    cin.tie(NULL);
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
        
    }

    int t;
    cin >> t;
    while(t--){
        int c;
        cin >> c;
  
        vector<int > v;
        
        for(auto child: adj_list[c]){
            // cout << child << " ";
            v.push_back(child);
        }
        if(v.size() == 0){
            cout << -1 <<"\n";
        }else{

            sort(v.begin(), v.end(), greater<int>());
              for(auto c: v){
                  cout << c << " ";
              }
              cout << endl;
        }
    }
    
    return 0;
}