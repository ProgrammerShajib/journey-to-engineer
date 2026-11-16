#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v = {1,2,3,4,5,6,7};
    list<int> li4(v.begin(), v.end());
    
    
    
    list<int>li ={1,2,3,4,5,6,7};
    // Assign another list
    // li = li4;
    // li.assign(li4.begin(),li4.end());

    // Add element 
    // li.push_back(100);
    // li.push_front(200);

    // Remove element
    // li.pop_back();
    // li.pop_front();

    // iterate 0 to 2
    // cout << *next(li.begin(),2);

    // insert the value at middle
    // li.insert(next(li.begin(),2),100);
    // li.erase(next(li.begin(),1), next(li.begin(),4));
    // replace(li.begin(), li.end(), 2,200);
    auto it = find(li.begin(), li.end(), 1);
    
    if(it == li.end()){
        cout << "Not Found" << endl;
    }else{
        cout << "Found" << endl;
    }

    for(int c : li){
        cout << c <<endl;
    }
    return 0;
}