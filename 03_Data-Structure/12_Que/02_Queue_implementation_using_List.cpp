#include<bits/stdc++.h>
using namespace std;
 
class Queue{
    public:
    list<int> l;
    
    void push(int val){  // O(1)
        l.push_back(val);
    }

    void pop(){ // O(1)
        l.pop_front();
    }

    int front(){
        return l.front();
    }

    int back(){
        return l.back();
    }

    int size(){ // O(1)
        return l.size();
    }

    int empty(){ // O(1)
        return l.empty();
    }

};

int main(){

    Queue q;

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
    cout << endl << q.front();
    return 0;
}