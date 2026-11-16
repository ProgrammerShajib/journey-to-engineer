#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void printList(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
void insert_at_head(Node* &head, int val){

    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
//  this is not the corner point for head
    // if(head == NULL){
    //     head = newNode;
    //     return;
    // }
}

void insert_at_tail(Node *head, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        // cout << temp->val << endl;
        temp = temp->next;
    }

    temp->next = newNode;
    

}

void insert_at_anypoint(Node* &head, int val, int index){

    Node* newNode = new Node(val);

    if(index == 0){
        insert_at_head(head,val);
        return;
    }
    Node* temp = head;


    for(int i =0;i<index-1;i++){

        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;    

}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_tail(head, 40);

    insert_at_anypoint(head, 20, 4);
    printList(head);

    return 0;
}