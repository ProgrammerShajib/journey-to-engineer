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
    cout << "L -> " ;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node* tail){
    Node* temp = tail ;
    cout << "R -> " ;
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

    newNode->next = temp->next;
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;

}
 

int main()
{
    Node* head = NULL, *tail = NULL;

    int n;
    cin >> n;
    int siz = 0;
    while (n--)
    {
        
        int idx ,val;
        cin >> idx >> val;
 
        if(idx > siz){
            cout << "Invalid" << endl;
        }else if(idx == 0){
            siz++;
            insert_at_head(head, tail, val);
            print_forward(head);
            print_backward(tail);
        }else if(idx == siz){
            siz++;
            insert_at_tail(head, tail, val);
            print_forward(head);
            print_backward(tail);
        }else{
            siz++;
            insert_at_anyposition(head, tail, idx ,val);
            print_forward(head);
            print_backward(tail);
        }
                
    }
   
    return 0;
}