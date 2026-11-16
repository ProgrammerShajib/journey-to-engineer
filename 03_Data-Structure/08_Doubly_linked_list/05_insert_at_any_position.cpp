#include <bits/stdc++.h>
using namespace std;

class Node
{
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

void print_forward(Node* head){
    Node* temp = head ;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node* tail){
    Node* temp = tail ;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_head(Node* &head,Node* &tail, int val){


    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int val){

    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail= newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;

    tail = newNode;
}

void insert_at_anyposition(Node* head, Node* tail ,int idx, int val){

    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i =1;i<idx;i++){
        temp = temp->next;
    }

    cout << temp->val;
    cout << endl;

    newNode->next = temp->next;
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;

}

int main()
{
    Node* head = NULL, *tail = NULL;

    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);

    head = a;
    head->next = b;
    b->prev = head;

    tail = c;

    b->next = tail;
    tail->prev = b;

    insert_at_head(head, tail, 100);
    insert_at_tail(head, tail , 200);

    insert_at_anyposition(head,tail, 2,40);

    print_forward(head);
    print_backward(tail);    
    
    return 0;
}