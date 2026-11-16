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

void delete_at_head(Node* &head, Node* &tail){

    Node* deleteNode = head;

    head = head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;

}


void delete_at_tail(Node* &head,Node* &tail){

    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_at_any_position(Node* head, int idx){

    Node* temp = head;

    for(int i = 1;i<idx;i++){
        temp = temp->next;
    }

    cout << temp->val << endl;
    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    // temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
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
    insert_at_tail(head, tail, 40);
    print_forward(head);

    // delete_at_tail(head, tail);
    delete_at_any_position(head,2);
    print_forward(head);
    print_backward(tail);

    
    return 0;
}