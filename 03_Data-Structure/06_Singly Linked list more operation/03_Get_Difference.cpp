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

    int x;
    while(cin >> x && x != -1) insert_val(head, tail, x);
    
    get_difference(head);
    return 0;
}