#include<bits/stdc++.h>
using namespace std;

void fun(int *a){ // in call by reference we will give the address 
    cout << *a << endl;

}
int main(){
    // In call by 
    int a = 10;
    int *p = &a;
    fun(p);
    cout << *p; // print the value using the dereference

    return 0;
}