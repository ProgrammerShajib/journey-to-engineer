#include<bits/stdc++.h>
using namespace std;

int fibonassi(int n){
    if(n<2){
        return n;
    }

    int sum = fibonassi(n-1) + fibonassi(n-2);
    return sum;
}

int main(){

    int n;
    cin >> n;
    cout << fibonassi(n);
    return 0;
}