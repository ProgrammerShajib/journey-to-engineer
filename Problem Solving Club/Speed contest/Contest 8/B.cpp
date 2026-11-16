#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        vector<char> a(6);
        for(auto &i : a)cin>> i;

        // for(auto c : a) cout << c  << " " ;
        int cnt = 0;
        for(int i = 0;i<6;i++){
            if(a[i] == 'W'){
                cnt++;
            }else{
                if(cnt < 3){
                    cnt = 0;
                }
            }
        }

        if(cnt >= 3){
            cout << "YES";
        }else{
            cout << "NO";
        }
        // cout << cnt;
        cout << endl;
    }
    return 0;
}