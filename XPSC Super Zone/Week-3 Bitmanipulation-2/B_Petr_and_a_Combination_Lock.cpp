#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;cin>> n;
    vector<int> v(n);
    for(auto &i : v)cin >> i;

    bool flag = false;
    for(int mask = 0; mask <(1<< n);mask++){
        int sum = 0;
        for(int i = 0;i<n;i++){
            if((mask>> i) & 1){
                sum += v[i];
            }else{
                sum-= v[i];
            }
        }
        if(sum%360 == 0){
            flag = true;
            break;
        }
    }

    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}