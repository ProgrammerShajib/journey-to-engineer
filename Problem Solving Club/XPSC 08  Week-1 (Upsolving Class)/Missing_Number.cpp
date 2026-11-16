#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    vector<int>v ;
    int n = t-1;
    while(n--){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i =1;i<= t;i++){
        if(i != v[i-1]){
            cout << i;
            break;
        }
    }
    

    return 0;
}