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

    print_forward(head);
    print_backward(tail);    
    
    return 0;
}