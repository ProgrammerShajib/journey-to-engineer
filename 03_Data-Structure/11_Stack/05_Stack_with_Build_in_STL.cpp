#include<bits/stdc++.h>
using namespace std;
int main(){

    stack<int> st;
    int x;
    while (cin >> x)
    {        
        st.push(x);
    }

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    // if we do pop, top from the stack in single we have to do this with check empty or not

    // if(!st.empty())
    //     st.pop();

    // cout << st.top();
    cout << st.size();

   
    return 0;
}