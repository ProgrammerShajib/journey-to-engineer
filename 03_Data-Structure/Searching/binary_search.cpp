#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v = {1,2,3,4,5,6};

    int query = 5;

    int l =0 ,r = v.size() -1;
    int flag = 0;
    while(l<=r){
        int mid = (l+r)/2;
        if(v[mid] == query){
            flag =1;
            break;
        }else if(v[mid] <query){
            l = mid+1;
        }else if(v[mid] > query){
            r = mid -1;
        }
    }

    if(flag == 1){
        cout << "found";
    }else{
        cout << "NOT found";
    }
    return 0;
}