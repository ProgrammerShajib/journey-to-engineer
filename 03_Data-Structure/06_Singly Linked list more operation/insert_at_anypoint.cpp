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

void Print_list(Node* head){
    if(head == NULL){
        return;
    }
    // head = head->next;
    cout << head->val << " ";
    Print_list(head->next);
}
void reversePrint(Node* head){
    if(head == NULL){
        return;
    }
    // head = head->next;
    reversePrint(head->next);
    cout << head->val << " ";
}

void insert_At_anypoint(Node* &head, Node* &tail, int val, int position){

    Node* newNode = new Node(val);
    if(head == NULL){
        head =  newNode;
        tail = newNode;
        return;
    }

    Node* temp = head;
    for(int i =0;i<position-1;i++){
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;




}

int main()
{

    Node *head = NULL , *tail = NULL;
    // Node *head2 = NULL, *tail2 = NULL;

    int x , y;
    // cout <<head << " " <<tail << endl;
    while(cin >> x && x != -1) insert_at_tail(head, tail, x);
    // while(cin >> y && y != -1) insert_at_tail(head2, tail2, y);
  

    // reversePrint(head);
    // cout << endl;
    // if(findSize(head, head2)){
    //     cout << "YES";
    // }else{
    //     cout << "NO";
    // }

    // int result = getSize(head2);
    // cout << result;

    int n;

    cin >> n;
 
    while(n--){
        int a,b;
        cin >> a >> b;
        cout << a << " " << b << " Head: "<<head <<" tail: " << tail<< endl;
        insert_At_anypoint(head, tail, a , b);
        Print_list(head);
    
    //     // cout << endl;
    // }

    // Print_list(head);
    // cout << endl;

    // insert_At_anypoint(head, tail, 14, 3);
    
    Print_list(head);
    return 0;
}