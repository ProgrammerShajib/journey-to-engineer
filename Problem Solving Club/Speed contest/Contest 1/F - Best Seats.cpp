#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int s;
        cin >> s;
        stack<int> q;
        set<int> st;
        while(s--){
            int a;
            cin >> a;
            if(q.empty()){
                q.push(a);
            }else{
         
                int d = a + q.top();
                st.insert(d);
                q.push(a);
            }
        }

        cout <<*st.begin() << endl;
    }
    return 0;
}