#include<bits/stdc++.h>
using namespace std;
int main(){

    int a =3;
     
    int ar[3];
    for(int i =0;i< a;i++){
        cin >> ar[i];
    
    }

    int maxnum = ar[0];
    for(int i =0;i< a;i++){
         maxnum = max(ar[i], maxnum);
    
    }
    int min_num = ar[0];
    for(int i =0;i< a;i++){
         min_num = min(ar[i], min_num);
    
    }

    cout << min_num << " " << maxnum;
    return 0;
}