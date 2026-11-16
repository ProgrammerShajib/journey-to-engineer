#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};
class myStack{
    public:
       list<int>l;
       Node* head = NULL;
       Node* tail = NULL;
       int siz = 0;
        void push(int val){
 
            siz++;
            Node* newNode = new Node(val);

            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        void pop(){
            siz--;
            Node* deleteNode = tail;
            tail = tail->prev;
            delete deleteNode;
            if(tail == NULL){
                head = NULL;            
                return;
            }
            tail->next = NULL;
        }

        int top(){
           return tail->val;
        }

        int size(){
  
            return siz;
        }

        bool empty(){
            return head == NULL;
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

    cout << st.size() << endl;
     
    return 0;
}