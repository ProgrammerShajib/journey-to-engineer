#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout << "size = " << v.size() << endl;
    for(int i = 0;i<v.size();i++){
        cout << v[i] <<" ";
    }
    v.push_back(6);
    cout << endl;
    
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    // int ar[10] = {1,2,3,4,5,6,7,8,9,0} ;
    // cout << *ar;
    // array<int,10> ar = {1,2,3,4,5,6,7,8,9,0} ;
    
    // array<int,10> b = ar;
    // b[1] = 5;
    // cout << ar[1];

    vector<int> v;
    v.push_back(2);
    v.push_back(4);

    vector<int> &v2 = v;
    v2.push_back(5);

    printVec(v);
    printVec(v);
    printVec(v2);




    return 0;
}