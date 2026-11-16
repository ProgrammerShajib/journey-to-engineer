#include<bits/stdc++.h>
using namespace std;
vector<int> primes;
int mxn = 1e5+7;
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
    int n;cin>> n;
    vector<int> freq(mxn);
    for(int i= 0;i<n;i++){
        int a;cin>>a;
        freq[a]++;
    }

    int ans = 1;
    for(auto c : primes){
        int current_pokiemon = 0;
        for(int i = c ;i<mxn;i+=c){
            current_pokiemon += freq[i];
        }

        ans = max(ans , current_pokiemon);
    }

    cout << ans ;
    return 0;
}