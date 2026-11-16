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
    // CORNER CASE 1: Empty List
    // If head is NULL, there is nothing to delete. 
    // Without this, temp->val or head->next would crash the program.
    if (head == NULL) return; 

    // CORNER CASE 2: Delete at Head (Index 0)
    // When deleting index 0, there is no "previous" node to link from.
    // We must update the 'head' pointer itself.
    if (index == 0) {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        
        // CORNER CASE 2.1: Deleting the only node in the list
        // If the list becomes empty, tail must also become NULL.
        if (head == NULL) {
            tail = NULL;
        }
        return; 
    }

    Node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        // CORNER CASE 3: Index Out of Bounds (Too Large)
        // If the user asks for index 100 but the list has 5 nodes,
        // we stop moving temp before it becomes NULL.
        if (temp == NULL || temp->next == NULL) return;
        temp = temp->next;
    }

    // Double check that the node to be deleted actually exists
    if (temp->next == NULL) return;

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;

    // CORNER CASE 4: Deleting the Tail (Last Node)
    // If the node we just deleted was the tail, temp->next is now NULL.
    // We must update the 'tail' pointer to be the current 'temp'.
    if (temp->next == NULL) {
        tail = temp;
    }
    
    delete deleteNode;
}
void print_list(Node* head){

    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void insert_at_head(Node* &head ,Node* &tail, int val){

    Node* newNode = new Node(val);
     if(head == NULL){
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
        }


        print_list(head);
    }
    
     
    return 0;
}