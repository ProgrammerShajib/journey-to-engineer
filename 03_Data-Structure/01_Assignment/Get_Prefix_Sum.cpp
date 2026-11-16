#include<bits/stdc++.h>
using namespace std;


void printArray(int n, vector<long long int> x){
    for(int i =n-1;i >=0 ;i--){
        cout << x[i] << " ";
    }
}


void get_Prefix_Sum(int n, vector<long long int>v){

    vector<long long int>V2(n);
    V2[0] = v[0];

    for(int i =1;i<n;i++){
        V2[i] = V2[i-1] + v[i];
    }
     
 
    printArray(n, V2);

}


int main(){

    int n;
    cin >>n;
    vector<long long int> v(n);
    for(int i =0;i<n;i++){
        cin >> v[i];
    }

    get_Prefix_Sum(n,v);
    return 0;
}