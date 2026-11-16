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
void insert_at_tail(Node* &head, Node* &tail, int val){
    
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    tail = newNode;
}


void print_list(Node* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
}

void print_recursion(Node* head){

    if(head == NULL){
        return;
    }
 
    cout << head->val << " ";
    print_recursion(head->next);
}

void print_reverse(Node* head){

    if(head == NULL){
        return;
    }
 
    print_reverse(head->next);
    cout << head->val << " ";
}

void reverse_singly_linked_list(Node* &head, Node* temp, Node* &tail){

    if(temp->next == NULL){
        head = temp;
        return;
    }

    reverse_singly_linked_list(head, temp->next, tail);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;

}
 

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    int x;
    while(true){
        cin >> x;
        if(x != -1){
            insert_at_tail(head, tail, x);
        }else{
            break;
        }
    }


    print_recursion(head);
    cout << endl;

    reverse_singly_linked_list(head, head, tail);
    print_recursion(head);

    cout << endl << head->val << endl << tail->val;
    return 0;
}