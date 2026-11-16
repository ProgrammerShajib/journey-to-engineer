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
    cout << endl << "Size : " << size << endl;
    
}

void recursion_print(Node* &head){
    Node* &temp = head;
 
    if(temp == NULL){
        return;
    }

    recursion_print(temp->next);
    cout << temp->val << " " << endl;
}

void duplicate_check(Node* head, Node* &tail){

    
    int found = false;
    Node* temp = head;

    for(Node* i = temp; i != NULL; i = i->next){

        Node* prev = i;
        for(Node* j = i->next; j != NULL;){
            if(i->val == j->val){
                Node* deleteNode = j;
                prev->next = j->next;
                if(deleteNode == tail){
                    tail = prev;
                }
                j = j->next;
                delete deleteNode;
                
            }else{
                prev = j;
                j= j->next;
            }
 
        }
    }
    
    // if(found){
    //     cout << "Yes";
    // }else{
    //     cout << "No";
    // }
    
}

int main(){

    Node* head = NULL, *tail = NULL;

    insert_at_head(head,20);
    insert_at_head(head,30);
    insert_at_head(head,40);
    insert_at_head(head,50);
    insert_at_head(head,50);
    insert_at_head(head,60);
    insert_at_head(head,60);
    print_list(head);
    duplicate_check(head, tail);
    recursion_print(head);
    

    return 0;
}