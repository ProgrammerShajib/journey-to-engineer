#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >>n;
    int a = 4 - n;
    int result = pow(2, a); 
    cout << 1000 * result;
}