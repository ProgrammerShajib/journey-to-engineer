#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int l;
        cin >> l;
        stack<char> st;
        string s;
        cin >> s;
        for(auto c : s){

            if(st.empty()){
                st.push(c);
            }else{
                char b = st.top();
                if(c != b){
                    st.pop();
                }else{
                    st.push(c);
                }
            }
        }

        
        int sz = st.size();
        if(sz == 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}