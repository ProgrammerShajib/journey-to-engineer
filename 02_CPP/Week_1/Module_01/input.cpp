#include<iostream>

using namespace std;
int main(){

    int a ;
    char b;
    
    cin >> a >> b;

    int c = b;
    cout << a << endl <<(int) b << endl;  // her (int) is the type casting

    cout <<(char) c;


    return 0;
}