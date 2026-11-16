#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        string s,t;cin>> s>> t;
        // cout << s << endl << t <<endl;
        string ans = "";
        for(int i = 0;i<s.size();i++){
            if(s[i] == t[i]){
                cout << 'G';
            }else{
                cout << 'B';
            }
        }
        cout <<endl;

    }
    return 0;
}