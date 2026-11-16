#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    string s ;cin>> s;

    map<char, int> a;
    for(auto c : s) a[c]++;
  
    int cnt = 0;
    for(auto [e,f] : a){
        if(f%2 != 0){
            cnt ++;
        }

    }

    if(cnt >1 ){
        cout << "NO SOLUTION";
    }else{
        string left = "" , right = "", middle = "";
        for(auto [e,f] : a){
            left += string(f/2, e);
     
            if(f%2 != 0 ){
                middle = e;
            } 
        }

        right = left;
        reverse(right.begin(), right.end());
        cout << left <<middle<<right;
    }
    return 0;
}