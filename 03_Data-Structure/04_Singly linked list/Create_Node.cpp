#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
        int value;
        Node* next; // here next will store the address 
};
int main(){

    Node a,b;
    a.value = 10;
    b.value = 20;

    a.next = &b;
    b.next = NULL;

    // cout << a.value << " " << a.next << endl;
    // cout << b.value << " " << b.next;
    // cout << (*a.next).value;
    cout<< a.next->value;
    
    return 0;
}