#include<bits/stdc++.h>
using namespace std;
void printArray(int n, vector<int> x){
    for(int i =0;i<=n;i++){
        cout << x[i] << " ";
    }
}

void getDuplicate(int n, vector<int> v){

    sort(v.begin(), v.end());
    int duplicate = false;
    for(int i=0;i<n;i++){
        if(v[i] == v[i+1]){
            duplicate = true;
        }
    }

    if(duplicate){
        cout << "YES";
    }else{
        cout << "NO";
    }
    // printArray(n,v);

}

int main(){

    int x;
    cin >> x;
    vector<int > v(x);
    for(int i =0;i<x;i++){
        int a;
        cin >> a;        
 
        v[i] = a;
    }

     

 

    getDuplicate(x, v);



    return 0;
}