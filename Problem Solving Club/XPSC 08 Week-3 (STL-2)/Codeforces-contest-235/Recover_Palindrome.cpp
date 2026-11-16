#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool result = true ;
        for(int i = 0 , j = n-1;i<= j;i++, j--){
            auto  c = s[i];
            auto  b = s[j];
            if(c == '?' && b == '?'){
                result = false;
                break;
            }
        }

        if(result){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}