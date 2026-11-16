#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int d;
    cin >> d;
    multiset<int> ml;
    while(d--){
        int a;
        cin >> a;
        ml.insert(a);
    }

    int days = 0, start = 1;
    while(!ml.empty()){

        auto it = ml.lower_bound(start);
        if(it != ml.end()){
            days++;
            start++;
            ml.erase(it);
        }else{
            break;
        }


    }

    

    cout << days;
    return 0;
}