#include<bits/stdc++.h>
using namespace std;

vector<int> allPrime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>> n;
        vector<int>a(n);
        for(auto &i : a)cin>> i;
        map<int, vector<int>> mp;

        for(int i = 0;i<n;i++){
            for(int j = 0;j <11;j++){
                if(a[i]% allPrime[j] == 0){
                    mp[allPrime[j]].push_back(i);
                    break;
                }
            }
        }


        vector<int> ans(n);
        int color = 1;
        for(auto [x,y]: mp){
            for(auto pos: y){
                ans[pos] = color;
            }
            color++;
        }

        cout << mp.size() << "\n";
        for(int i = 0;i<n;i++){
            cout << ans[i] <<" ";
        }
        cout << "\n";
    }
    return 0;
}