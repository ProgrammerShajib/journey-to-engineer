#include<bits/stdc++.h>
using namespace std;
int main(){

    int a;
    cin >> a;
    int ar[a];
    for(int i =0;i< a;i++){
        cin >> ar[i];
    
    }

    int maxnum = ar[0];
    for(int i =0;i< a;i++){
         maxnum = max(ar[i], maxnum);
    
    }

    cout << maxnum;
    return 0;
}