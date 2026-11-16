#include<bits/stdc++.h>
using namespace std;

int* p;
void Hello(){
    int *x = new int ;
    cout << *x << endl;
    *x = 10;
    cout << *x << endl;
    p = x;
    cout<< "Hello function = " << *p << endl;
    return;
}
int main(){

    Hello();
    cout << "Main Function = " << *p;
    return 0;
}