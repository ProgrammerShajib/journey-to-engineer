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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
    return;
}

int getSize(Node* head){

    int count = 0;
    for(Node* i = head;i != NULL;i = i->next){
        count++;
    }
    return count;
}

bool findSize(Node* head, Node* head2){
    while(head != NULL && head2 != NULL){
        head = head->next;
        head2 = head2->next;
    }
    
    return (head == NULL && head2 == NULL);
}

void reversePrint(Node* head){
    if(head == NULL){
        return;
    }
    // head = head->next;
    reversePrint(head->next);
    cout << head->val << " ";
}

int main()
{

    Node *head = NULL , *tail = NULL;
    Node *head2 = NULL, *tail2 = NULL;

    int x , y;
 
    while(cin >> x && x != -1) insert_at_tail(head, tail, x);
    while(cin >> y && y != -1) insert_at_tail(head2, tail2, y);
  

    // reversePrint(head);
    // cout << endl;
    // if(findSize(head, head2)){
    //     cout << "YES";
    // }else{
    //     cout << "NO";
    // }

    int result = getSize(head2);
    cout << result;
    
    return 0;
}