#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    long long n;cin>> n;
    vector<long long> a(n);
    for(auto &i : a) cin >>i;
    long long q;
    cin>> q;
    while(q--){
        long long k;cin>>k;
        auto  lower = lower_bound(a.begin(), a.end(), k) ;
        if(lower == a.begin()){
            cout << "X" <<" ";
        }else{
            cout << *(lower-1) <<" ";
        }
        auto big = upper_bound(a.begin(), a.end(), k) ;

        if(big == a.end()){
            cout <<"X" <<endl;
        }else{
            cout << *big <<endl;
        }
         
    }
    return 0;
}