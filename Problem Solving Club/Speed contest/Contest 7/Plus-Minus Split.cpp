#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
      
    int t ;cin >>t;
    while(t--){
        int n;cin>>n;
        bool possible = true;
        vector<int>v(n);
        for(auto &i : v)cin >>i;
        for(int i = 1;i<n;i++){
            if(abs(v[i]) != abs(v[i-1])){
                possible = false;
            }
        }

        if(possible){
            cout <<"Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;   
}