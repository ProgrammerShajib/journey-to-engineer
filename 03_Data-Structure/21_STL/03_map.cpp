#include<bits/stdc++.h>
using namespace std;
int main(){

    map<string, int> mp;

    mp["banana"] = 4;
    mp["cucumber"] = 1;
    mp["apple"] = 2;
    mp["apple"] = 1;
    mp["orange"] = 3;


    for(auto it = mp.begin(); it != mp.end(); it ++){
        // here i am accessing the key doing the destructer the iterator and in the second we use the shorcut (->) to access the value 
        cout << (*it).first << " = " << it->second << endl;
    }
    // // now if a value is present or not to check that we use the mp.count() function it gives us true or false

    // if(mp.count("apple")){
    //     cout << "ache ";
    // }else{
    //     cout << "Nai";
    // }

    mp["apple"] += 2;
    cout << mp["apple"];
     return 0;
}