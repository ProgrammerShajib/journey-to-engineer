#include<bits/stdc++.h>
using namespace std;
class Node{

    public: // access modifier
    int value;
    Node* next;

    // Creating a constructor
    Node(int val){
        this->value = val;
        this->next = NULL;
    }

};
int main(){

    Node* Head = new Node(10);
    
    Node* a = new Node(20);

    Head->next = a;

    cout << Head->value << " " << Head->next << endl << Head->next->value <<  " " << Head->next->next;


    return 0;
}