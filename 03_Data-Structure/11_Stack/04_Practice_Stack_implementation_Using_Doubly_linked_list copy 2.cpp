#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;
    
    Node(int val){
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class myStack{
    public:
        Node* head = nullptr;
        Node* tail = nullptr;
        int sz = 0;
        void push(int val){
            sz++;
            Node* newNode = new Node(val);
            if(head == nullptr){
                head = newNode;
                tail = newNode;
                return ;
            }else{
                newNode->prev = tail;
                tail->next = newNode;
                tail = newNode;
            }
        }

        void pop(){
            sz--;
            Node* deleteNode = tail;
            tail = tail->prev;
            delete deleteNode;
            if(tail == nullptr){
                head = nullptr;
            }
            tail->next = nullptr;

        }

        int size(){
            return sz;
        }

        int top(){

            return tail->val;
        }

        bool empty(){
            if(size() == 0){
                return true;
            }else{
                return false;
            }
        }


};
int main(){
    myStack st;
    int x;
    while (cin >> x)
    {        
        st.push(x);
    }

    cout << st.size() << endl;
    // print the stack
    while (!st.empty())
    {
        cout << st.top() <<endl;
        st.pop();
    }

    cout << st.size();
    
    return 0;
}