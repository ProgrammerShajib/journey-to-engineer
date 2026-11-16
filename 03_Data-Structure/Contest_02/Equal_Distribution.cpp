#include<bits/stdc++.h>
using namespace std;
int main(){

    long long a ,b;
    cin >> a >> b;
    long long r = b%a;
    long long s = b/a;
 
    cout << s << " " << r;
    return 0;
}