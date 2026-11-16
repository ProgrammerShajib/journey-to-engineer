#include<bits/stdc++.h>
using namespace std;
int main(){

    // vector<int> v(10, 5);
    // cout << v.size() << endl;
    vector <int > v(4, 4);
    v.resize(5);
    
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // v.push_back(10);
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // cout <<"Size: " <<  v.size();

    // cout << v.size() << endl;
    for (int i =0;i<v.size();i++){
        cout << v[i] << endl;
    }

    // cout << v.max_size();
    // cout << v.capacity();
    // v.clear();
    // cout << v.size();
    // if(v.empty()){
    //     cout << "Vector is empty.";
    // }else {
    //     cout << "Vector is not empty.";
    // }
    return 0;
}