#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        map<int,int> mp;
        vector<int> v;
        for(int i = 1;i<=n;i++){
            int a;cin >> a;
            v.push_back(a);
            mp[a]++;
        }

        for(int i = 0;i<n;i++){

            if(mp[v[i]] == 1){
                cout << i+1 ;
            }
             
        }

        cout<< endl;
       



        

    }
    return 0;
}