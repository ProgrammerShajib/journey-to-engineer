#include<bits/stdc++.h>
using namespace std;

int* p;
void Hello(){
    int x = 12;
    p = &x;
    cout<< "Hello function = " << *p << endl;
    return;
}
int main(){

    Hello();
    cout << "Main Function = " << *p;
    return 0;
}