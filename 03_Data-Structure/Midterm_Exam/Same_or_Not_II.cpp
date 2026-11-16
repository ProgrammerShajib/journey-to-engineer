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

class Queue{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int siz = 0;

    void push(int val){
        siz++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return ;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop(){
        if(head == NULL){
            return ;
        }
        siz--;
        Node* deleteNode = head;
        head = head->next;
        if(head == NULL){
            tail = NULL;
            return ;
        }else{
            head->prev = NULL;
        }
        delete deleteNode;
    }
    int front(){
        if(head == NULL){
            return -1 ;
        }
        return head->val;
    }
    int size(){
        return siz;
    }
    bool empty(){
        return head == NULL;
    }
     
};

class Stack{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int siz = 0;

    void push(int val){
        siz++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return ;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop(){
        if(head == NULL){
            return ;
        }
        siz--;
        Node* deleteNode = tail;
        tail = tail->prev;
        delete deleteNode ;
        if(tail == NULL){
            head = NULL;

            return ;

        }
        tail->next = NULL;

     
    }
    int top(){
        if(head == NULL){
            return -1 ;
        }
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

    Queue q;
    Stack st;

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
  