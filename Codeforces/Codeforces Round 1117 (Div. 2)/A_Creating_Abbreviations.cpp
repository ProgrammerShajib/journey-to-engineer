#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        map<char, bool> mp_a;
        for(int i = 0; i < a; i++){
            string s; 
            cin >> s;
            char first_letter = toupper(s[0]); 
            mp_a[first_letter] = true;
        }
        bool ans = true;
        for(int i = 0; i < b; i++){
            string s; 
            cin >> s;
            
            for(auto c : s){
                if(mp_a[c] != true){
                    ans = false;  
                }
            }
        }
        if(ans){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}