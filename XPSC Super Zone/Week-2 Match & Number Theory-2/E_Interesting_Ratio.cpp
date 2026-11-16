#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> primes;
int mxn = 1e7+7;
void seive(){
    vector<int> is_prime(mxn, true);
    for(int i= 2;i<mxn;i++){
        if(is_prime[i] == true){
            primes.push_back(i);
            for(int j = 2*i;j<mxn;j+=i){
                is_prime[j] = false;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    seive();
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        int a;cin>> a;
        ll total = 0;
        for(auto c : primes){
            if(c >a) break;
            total += a/c;
        }

        cout << total << "\n";
    }
    return 0;
}