#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v={1,2,3,2,5,23, 2};
    vector <int > v2;
    v2 = v;
    v2.pop_back();
//    vector <int > name  = {100,200,300};
 
    // insert()
    // v2.insert(v2.begin()+2,name.begin(), name.end());
    // for(int  x: v2){
    //     cout << x << " ";
    // }
    // cout << v2.size() << endl;

    // Erease ()
    // v2.erase(v2.begin()+2, v2.begin()+5);
    // cout << v2.size();

    // replace()
    //  replace(v2.begin(), v2.end(), 2, 100);
    //  for(int i = 0;i < v2.size();i++){
    //     cout << v2[i] << " ";
    //  }
    auto it = find(v2.begin(), v2.end(), 2);
    // cout << *it; // print the value using the dereferenceing

    
    // if(it == v2.end()){
    //     cout << "Not Found";
    // }else{
    //     cout << "Found";
    // }


    return 0;
}