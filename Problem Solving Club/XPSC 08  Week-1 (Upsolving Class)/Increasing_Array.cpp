#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    vector<long long> v;
    

    long long inc = 0;
    while(n--){
        long long b;
        cin >> b;
        if(v.empty()){
            v.push_back(b);
        }else{
            if(b < v.back()){
                inc = inc + (v.back() - b );
                v.push_back(b+(v.back() - b));
            }else{
                v.push_back(b);
            }
        }
        
    }
    cout << inc;
    return 0;
}