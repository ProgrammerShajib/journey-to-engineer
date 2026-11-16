#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin >> n;
    set<pair<string, string>>st;
    while(n--){
        string a , b;
        cin >> a >> b;

        if(st.find({a,b}) == st.end()){
            st.insert({a,b});

        }

    }
 
    cout << st.size();
    return 0;
}