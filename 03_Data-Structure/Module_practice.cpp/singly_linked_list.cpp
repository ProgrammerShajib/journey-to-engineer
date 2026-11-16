#include <bits/stdc++.h>
using namespace std;

class Node
    {
    public:
        int value;
        Node *next;

        Node(int val)
        {
            this->value = val;
            this->next = NULL;
        }
    };

int get_length(Node *head)
{

    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;
}

void insert_val(Node *&head, Node *&tail, int val)
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
}

void insert_at_anypoint(Node *&head, Node *&tail, int val, int position)
{

    Node *newNode = new Node(val);
    Node *temp = head;

    // optional this line it will work if we don't put this line
    int length = get_length(head);
    if (position > length)
        return;
    // cout << length;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void delete_at_anypoint(Node *&head, Node *&tail, int position)
{

    //  1 2 3 4 5 6 7

    if (head == NULL)
        return;

    if (position == 0)
    {

        delete_at_head(head, tail);
    }

    Node *temp = head;

    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
}

void delete_at_head(Node *&head, Node *&tail)
{

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    if (head == NULL)
    {
        tail = head;
    }
    return;
}

void delete_at_anypoint_old_version(Node *head, Node *&tail, int position)
{
    Node *temp = head;
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
}

void remove_duplicate(Node *head, Node *&tail)
{

    for (Node *i = head; i != NULL; i = i->next)
    {

        Node *previous_Node = i;

        for (Node *j = i->next; j != NULL;)
        {
            if (i->value == j->value)
            {                         // we find the value that store in the j node
                Node *deleteNode = j; // now we store the j node for delete

                previous_Node->next = j->next; // update the previous pointer to the j.next so it will remain the connection in list

                if (deleteNode == tail)
                { // check if the deleteNode is the tail then update it
                    tail = previous_Node;
                }
                j = j->next;       // now update the j to j.next
                delete deleteNode; // finaly delete the j node if you delete the j node before update it will show the error because it wouldn't find the location
            }
            else
            {
                previous_Node = j;
                j = j->next;
            }
        }
    }
}

void print_list(Node *head)
{

    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}

void recursion_print(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    // head = head->next; // use it for normal print
    recursion_print(head->next);
    cout << head->value << " ";
}

int main()
{

    Node *head = NULL, *tail = NULL;

    int x;
    int length;
    // while (true)
    // {
    //     cin >> x;
    //     if (x != -1)
    //     {
    //         insert_val(head, tail, x);
    //         count++;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }

    while (cin >> x)
    {

        insert_val(head, tail, x);
        length++;
    }

    print_list(head);

    cout << endl;
    // cout << length << endl;
    // get_length(head);
    // insert_at_anypoint(head, tail,10,2);
    // cout << endl;
    // print_list(head);

    // delete_at_head(head);
    // cout << endl << "After delete the head : " << endl;
    // print_list(head);

    // delete_at_anypoint_old_version(head,tail, 10);
    // cout <<endl << "After delete from any point : " << endl;
    remove_duplicate(head, tail);
    print_list(head);

    return 0;
}