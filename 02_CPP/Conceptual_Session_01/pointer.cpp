#include<bits/stdc++.h>
using namespace std;

int* Ptr(){
    int c = 33;
    int *h = &c;
    // *h = 22;
    return h;
}
int main(){

    int a = 100;
    // cout << "Address of a = " << &a  << endl << " = " << a << endl;
 
    int *ptr = &a; // Store the address of variable in pointer
    *ptr = 2000;  // Change the value with Dereferenceing 
    // cout << "Address of ptr = " << &ptr  << endl << *ptr;
 
    // cout << a << endl << ptr;
    // cout << ptr;

    int* c = Ptr(); // Pointer return from function
    cout << c << endl ;
    cout << *c ;
    return 0;
}