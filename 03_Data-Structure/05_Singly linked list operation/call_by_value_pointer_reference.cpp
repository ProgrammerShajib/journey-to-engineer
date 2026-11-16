#include <bits/stdc++.h>
using namespace std;

void fun(int *p)
{               // here i am reciving the pointer
    p = NULL;   // Here i am changing the address i recive to NULL 
    cout << p << endl; // here i am trying to print the value that store in the a but it will print nothing because i change the address i receive so when i try to print the value i got nothing.
}
int main()
{

    int a = 10;
    int *p = &a;
    fun(p); // call it with the value
    cout << *p;

    return 0;
}
