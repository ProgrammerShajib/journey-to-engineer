#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val);
        }

        void pop(){
            v.pop_back();
        }

        int top(){
           return v.back();
        }

        int size(){
            return v.size();
        }

        int empty(){
            return v.empty();
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
    
    return 0;
}