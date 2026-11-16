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

class Queue{
    public:
    Node* head = nullptr;
    Node* tail = nullptr;
    int siz = 0;

    void push(int val){  // O(1)
        siz++;
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = newNode;
            tail = newNode;
            return ;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop(){ // O(1)
        
        siz--;    
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == nullptr){
            tail = nullptr;
            return;
        }
        head->prev = nullptr;
    }

    int front(){
        return head->val;
    }

    int back(){
        return tail->val;
    }

    int size(){ // O(1)
        return siz;
    }

    int empty(){ // O(1)
        return head == nullptr;
    }

};

int main(){

    Queue q;

    int x;
    while(cin >> x){
        q.push(x);
    }
    
    cout << q.size() << endl;
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    q.push(4);
    cout << endl << q.front();
    return 0;
}