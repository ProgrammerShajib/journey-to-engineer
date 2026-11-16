#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;
    vector <int > a(n) , b(n);
    
    vector < int > c;
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<n;i++){
        cin >> b[i];
    }
     
    c = b;
    c.insert(c.end(), a.begin(), a.end());
    for(int d: c){
        cout << d << " ";
    }
    return 0;
}