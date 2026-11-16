#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    list<int> l;
    while(n--){
        int val;
        cin >> val;
        l.push_back(val);
    }

    queue<int> q1;
    queue<int> q2;
    
    while(!l.empty()){
     int v = l.front();   
     if(v%2 == 0){
        q1.push(v);
     }else{
        q2.push(v);
     }
     
     l.pop_front();


    }

    while(!q1.empty()){
     int v = q1.front();   
    l.push_back(v);
     
     q1.pop();
    }
    while(!q2.empty()){
     int v = q2.front();   
    l.push_back(v);
     
     q2.pop();
    }
    while(!l.empty()){
        cout << l.front() << " ";
        l.pop_front();
    }
    

   
    return 0;
}