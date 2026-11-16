#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    // Create Constructor
    Node(int val){
        this->value = val;
        this->next = NULL; 
    }
};
int main(){

    Node a(10),b(20);
    
    a.next = &b;

    cout << a.value << " " << (*a.next).value << " " <<a.next->next;
    // cout << a.value << " " << a.next->value;

    return 0;
}