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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    if(head== NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;


}

void recursion_print(Node* head ){
    if(head == NULL){
        return;
    }
  
    recursion_print(head->next);
    cout<< head->val << " ";
}

void print_list(Node* head){

    while(head != NULL ){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// void selection_sort(Node* head){



//     for(Node* i = head;i->next != NULL; i = i->next){
//         for(Node* j = i->next;j != NULL;j = j->next){
//             if(i->val > j->val){
//                 swap(i->val, j->val);
//             }
//         }
//     }
// }


void selection_sort(Node* head ){

  
    for(Node* i = head;i->next != NULL ; i = i->next){
        for(Node* j = i->next; j != NULL; j = j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    
    int x;
    while(true){
        cin >> x;

        if(x != -1){

            insert_at_tail(head, tail, x);
        }else{
            break;
        }

    }

    cout << "Before sorting : " << endl ;
    print_list(head);
    cout << endl << "After sorting : " << endl;
    selection_sort(head);

 
    print_list(head);
    cout << endl << "Print in reverse." << endl;
    recursion_print(head);
    return 0;
}