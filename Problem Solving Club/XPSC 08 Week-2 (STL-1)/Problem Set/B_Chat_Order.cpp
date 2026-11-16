#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin >> n;

    map<string , bool> mp;
    stack<string > st;
    while(n--){
        string name ;
        cin >> name ;
        st.push(name);
        mp.insert({name, false});
    }

   while(!st.empty()){
    string s = st.top();
    if(!mp[s]){
        cout << s << endl;
        mp[s] = true;
    }
    st.pop();
   }
    return 0;
}