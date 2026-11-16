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
    }

    tail->next = newNode;
    tail = newNode;
}

void print_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

void print_recursion(Node *head)
{

    if (head == NULL)
    {
        return;
    }

    cout << head->val << " ";
    print_recursion(head->next);
}

void print_reverse(Node *head)
{

    if (head == NULL)
    {
        return;
    }

    print_reverse(head->next);
    cout << head->val << " ";
}

void delete_head(Node *&head)
{

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_at_anypoint(Node *&head, int postion)
{

    Node *temp = head;
    for (int i = 0; i < postion - 1; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << temp->val;
}

void delete_at_tail(Node *&head)
{
    // if list is empty
    if (head == NULL)
        return;

    // if list has only 1 element
    if (head->next == NULL)
    {
        Node *deleteNode = head;
        head == NULL;
        delete deleteNode;
    }
    // if i have 2 or more Node/element
    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = NULL;
    delete deleteNode;
}

void insert_at_head(Node *&head, int val)
{

    // if(head == NULL){

    // }
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}
void insert_at_anypoint(Node *head, int val, int position)
{
    Node *newNode = new Node(val);

    Node *temp = head;
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next->next;
    temp->next = newNode;
}

void remove_duplicate(Node* &head, Node* &tail ){

    if( head == NULL || head->next == NULL) return;
    // if(!head || !head) return; these two code are same
    
    for(Node* i = head;i->next != NULL;i = i->next){
        Node* prev = i;
        for(Node* j = i->next; j != NULL;){
            if(i->val == j->val){
               
                prev->next = j->next;

                if(j == tail){
                    tail = prev;
                }
                delete j;
                j = prev->next;  // does this line work or not
            }else{
                prev = j;
                j = j->next;
            }
        }
    }

}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int x;
    while(true){
        cin >> x;
        if(x != -1){
            insert_at_tail(head, tail, x);
        }else{
            break;
        }
    }

    cout << "Initial list:" << endl;
    print_recursion(head);
    cout << endl;
    // insert_at_anypoint(head, 15, 2);

    // cout << "After insert at head:" << endl;
    // insert_at_head(head, 10);
    // print_reverse(head);=-
    // delete_head(head);
    // cout << "after delete head: ";
    // print_recursion(head);

    // int y;
    // cin >> y;
    // delete_at_anypoint(head, y);

    // cout << endl <<"After delete: " << endl;
    // delete_at_tail(head);

    remove_duplicate(head, tail);
    cout << endl <<"After delete head: " << endl;

    print_recursion(head);
    return 0;
}