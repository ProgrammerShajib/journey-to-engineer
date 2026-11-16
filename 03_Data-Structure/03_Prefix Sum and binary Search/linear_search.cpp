#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin >> v[i];
    }

    int q ;
    cin >> q;
    int flag =0;
    for(int i =0;i<n;i++){
        if(q == v[i]){
            flag = 1;
            break;
        } 
    }

    if(flag == 1){
        cout << "found";
    }else{
        cout << "not found";
    }
    return 0;
}