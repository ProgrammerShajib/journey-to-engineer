#include<bits/stdc++.h>
using namespace std;
int main(){

    double a = 0.1, b = 0.2;
    double eps = 1e-9;
    cout << eps << endl;
    if(abs((a+b) - 0.3) < eps)
        cout << "true";
    else
        cout << "False";

        
    // Don't compare like this
    // if(0.1+0.2 == 0.3) 
    //     cout << "true";
    // else
    //     cout << "false";
    return 0;
}