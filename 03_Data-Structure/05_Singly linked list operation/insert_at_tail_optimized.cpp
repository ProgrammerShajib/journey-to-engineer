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

void insert_at_tail(Node *&head,Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    Node *temp = head;
    // while (temp->next != NULL)
    // {
    //     // cout << temp->val << endl;
    //     temp = temp->next;
    // }

     tail->next = newNode;
     tail = newNode;
    

}

int main()
{

    Node* head = NULL;
    Node* tail = NULL;

    insert_at_tail(head, tail, 10);
    insert_at_tail(head, tail, 20);
    printList(head);

    return 0;
}