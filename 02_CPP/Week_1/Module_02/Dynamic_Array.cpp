#include<bits/stdc++.h>
using namespace std;
int* Hello(){
     int *a = new int[5];
    // int a[5];
    for(int i=0;i<5;i++){
        cin >> a[i];
    }
    return a;
}
int main (){

    int* x = Hello();

    // cout << *(x+1);
    for(int i = 4; i>= 0 ;i--){
        cout << x[i] << " ";
    }

    return 0;
}