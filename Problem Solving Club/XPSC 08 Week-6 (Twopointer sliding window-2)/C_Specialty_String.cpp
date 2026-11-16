#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>> n;
        string s;cin >> s;
        stack<char> st;
        for(auto c : s){
            if(st.empty()){
                st.push(c);
            }else{
                char d = st.top();
                if(c == d){
                    st.pop();
                }else{
                    st.push(c);
                }
            }


        }

        if(st.size() > 0) no;
        else yes;
    }
    return 0;
}