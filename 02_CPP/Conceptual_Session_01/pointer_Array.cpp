#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[3];
    arr[0] = 10;    
    arr[1] = 20;    
    arr[2] = 30;
    cout << &arr[2] << endl;    
    cout << *(&arr[2]);    
    // cout << arr;  // this show that arry is a pointer because it initialy hold the address
    return 0;
}