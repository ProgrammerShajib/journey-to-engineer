#include<bits/stdc++.h>
using namespace std;
int main(){

    // for min heap 
    priority_queue<int , vector<int>, greater<int>> pq;
    // for max heap
    // priority_queue<int> pq;
    pq.push(10);
    // cout << pq.top() << " ";
    pq.push(20);
    // cout << pq.top() <<" ";
    pq.push(30);
    // cout << pq.top() << " ";
    pq.push(40);
    // cout << pq.top() << " ";
    // pq.pop();
    // pq.pop();
    cout << pq.top() << " ";

    return 0;
}