#include<bits/stdc++.h>
using namespace std;
class Node{

    public: 
        int val;
        Node* next;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head , int val){

    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    
}

void insert_at_tail(Node* head, Node* &tail, int val){

    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = NULL;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_list(Node* head){
    Node* temp = head;
    int size =0;
    while(temp != NULL){
        cout << temp->val << " ";
        size++;
        temp = temp->next;
    }
    cout << endl << "Size : " << size;
    
}

void recursion_print(Node* &head){
    Node* &temp = head;
    head = head->next;
    if(temp == NULL){
        return;
    }

    recursion_print(temp->next);
    cout << temp->val << " ";
}

int main(){

    Node* head = NULL, *tail = NULL;

    insert_at_head(head,20);
    insert_at_head(head,30);
    insert_at_head(head,40);
    insert_at_head(head,50);
    insert_at_head(head,60);
    // print_list(head);
    recursion_print(head);

    return 0;
}