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

void delete_at_anypoint(Node* &head, Node* &tail, int index) {

    
    if (head == NULL) return;  

    if (index == 0) {
        Node* deleteNode = head;
        head = head->next; 
        delete deleteNode;
        
        if (head == NULL) {
            tail = NULL;
        }
        return;  
    }

    Node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        temp = temp->next;   
        if (temp == NULL) return; 
    }

 
    if (temp->next == NULL) return;
    Node* deleteNode = temp->next;
    temp->next = temp->next->next; 
    if (temp->next == NULL) {
        tail = temp;
    }
    
    delete deleteNode;
}


void delete_at_anypoint_old_Version(Node* head, Node *&tail, int position){
    Node* temp = head;
    for(int i =0;i<position-1;i++){
        temp = temp->next;
        
    }

    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;



}
void print_list(Node* head){

    while(head != NULL){
        cout << head->val  << " ";
        head =  head->next;
    }
    cout << endl;
}
void insert_at_head(Node* &head , Node* &tail, int val){

    Node* newNode = new Node(val);
     if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node* &head , Node* &tail, int val){

    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void get_difference(Node* head){

    Node* temp = head;

    int max = temp->val;
    int min = temp->val;

    while(temp != NULL){

        if(max < temp->val){
            max = temp->val;
        }if(min > temp->val){
            min = temp->val;
        }

        temp = temp->next;
    }

    cout << max - min;
}


int main(){

    Node *head = NULL, *tail = NULL;

    int n;
    cin >> n;
    while(n--){
        int a, val;
        cin >> a >> val;

        if(a == 0){
            insert_at_head(head,tail, val);
        }else if(a == 1){
            insert_at_tail(head, tail, val);

        }else if (a == 2){
            delete_at_anypoint(head,tail, val);
            // delete_at_anypoint_old_Version(head, tail, val);
        }


        print_list(head);
    }
    
     
    return 0;
}