#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    long long  n,k;cin>>n >>k;
    vector<long long> a;

    for(long long i = 1;i*i <= n;i++){
        if(n%i == 0){
            a.push_back(i);
            if(i != n/i){
                a.push_back(n/i);
            }
        }
    }
    // Hello
    sort(a.begin(), a.end());
    if(a.size() < k){
        cout << -1 <<"\n";
    }else{
        
        cout << a[k-1];
    }
    return 0;
}