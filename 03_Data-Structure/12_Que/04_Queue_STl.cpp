#include<bits/stdc++.h>
using namespace std;
int main(){

    queue<int> q;

    int x;
    while(cin >> x){
        q.push(x);
    }
    
    cout << q.size() << endl;
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    q.push(4);
    q.push(2);
    q.pop();
    cout << endl << q.front();
    return 0;
}