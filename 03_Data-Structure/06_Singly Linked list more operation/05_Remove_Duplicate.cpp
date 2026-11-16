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

void print_list(Node* head){

    while(head != NULL){
        cout << head->val  << " ";
        head =  head->next;
    }
 
}

void insert_val(Node* &head , Node* &tail, int val){

    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void remove_duplicate(Node* &head, Node* &tail){

 

     for(Node* i = head;i!= NULL; i = i->next){

        Node* prev = i;
        for(Node* j = i->next;j != NULL; ){
            if(i->val == j->val){
                Node* deleteNode = j;
             
             prev->next = j->next;
             if(deleteNode == tail){
                tail = prev;
             }

             delete deleteNode;
             j = prev->next;


            }else{
                prev = j;
                j= j->next;
            }
        }
    }
}

 
int main(){

    Node *head = NULL, *tail = NULL;

    int x;
    while(cin >> x && x != -1) insert_val(head, tail, x);
 
 
    remove_duplicate(head, tail);
    print_list(head);
    return 0;
}


//  2      3       3       4       4       3       5       6