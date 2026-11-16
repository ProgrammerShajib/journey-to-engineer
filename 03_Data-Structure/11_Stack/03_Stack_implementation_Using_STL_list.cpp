#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
        list<int> l;

        void push(int val){
            l.push_back(val);
        }

        void pop(){
            l.pop_back();
        }

        int top(){
           return l.back();
        }

        int size(){
            return l.size();
        }

        int empty(){
            return l.empty();
        }



};
int main(){
    myStack st;
    
    int x;
    while (cin >> x)
    {        
        st.push(x);
    }

    // print the stack
    while (!st.empty())
    {
        cout << st.top() <<endl;
        st.pop();
    }

    cout << st.size();
    
    return 0;
}