#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
        int val;
        Node* next;

    Node(int val){
        this->val = val;
        this->next = nullptr;
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
        tail = newNode;
    }

    void pop(){ // O(1)
        
        siz--;
        Node* deleteNode = head;
        head = head->next;
        if(head == nullptr){
            tail = nullptr;
        }
        delete deleteNode;
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


    return 0;
}