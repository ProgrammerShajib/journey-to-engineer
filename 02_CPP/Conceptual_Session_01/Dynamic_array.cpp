#include<bits/stdc++.h>
using namespace std;
int* fun(int n){
    int* arr = new int[n];
    for(int i =0;i<n;i++){
        cin >> arr[i] ;
    }

    return arr;
}
int main(){

    int n;
    cin >> n;
    int* mainAr = fun(n);

    cout << mainAr << endl;
    for(int i =0;i<n;i++){
        cout << mainAr[i] << " ";
    }
    cout << *mainAr;

    return 0;
}