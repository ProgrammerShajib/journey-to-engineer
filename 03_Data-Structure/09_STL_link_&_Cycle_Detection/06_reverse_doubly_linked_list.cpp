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
 

void reverse_doubly_linked_list(Node* &head, Node* &tail){

    for(Node* i = head,*j = tail; i != j && i->prev != j;i = i->next,j = j->prev){
        swap(i->val, j->val);
    }
}
int main()
{
    Node* head = NULL, *tail = NULL;

    while (true)
    {
        
        int x;
        cin >> x;
        if(x == -1){
            break;
        }
        insert_at_tail(head, tail, x);
    }
    
 
    print_forward(head);
    reverse_doubly_linked_list(head, tail);
    print_backward(tail);
    cout << head->val << endl << tail->val << endl;

 
 

    
    return 0;
}