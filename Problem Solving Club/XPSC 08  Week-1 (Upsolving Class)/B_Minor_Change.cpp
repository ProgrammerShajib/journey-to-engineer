#include<bits/stdc++.h>
using namespace std;
int main(){

    string a, b;
    cin >> a >>b;
    int len = a.length();
    int cnt =0;
    for(int i = 0;i<len;i++){
        if(a[i] != b[i]){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}