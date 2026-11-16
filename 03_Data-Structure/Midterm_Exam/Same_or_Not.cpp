#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> st;
    queue<int> q;

    int a, b;
    cin >> a >> b;
    if( a == b){

        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            st.push(x);
        }
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        
        bool same = true;
        
        while (!st.empty() && !q.empty())
        {
           
            if (st.top() == q.front())
            {
    
                st.pop();
                q.pop();
                same = true;
            }else{
                same = false;
                break;
            }
        }
        if(same){
            cout << "YES";
        }else{
            cout<< "NO";
        }
    }else{
        cout << "NO";
    }
    return 0;
}