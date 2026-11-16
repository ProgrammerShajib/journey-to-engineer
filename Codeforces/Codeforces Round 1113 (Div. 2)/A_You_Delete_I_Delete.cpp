#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        string s;cin>> s;
        bool z = false;
        bool one = false;

        
        for(int i = 0;i<s.size();i++){
            
                if(s[i] == '0' && !z){
                    z = true;
                }else if(s[i] == '1' && !one){
                    one = true;
                }else{
                    cout << s[i];
                }
            
        }

        cout << endl;

    }
    return 0;
}