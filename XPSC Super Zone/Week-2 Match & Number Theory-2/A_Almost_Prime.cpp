#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<int> prime;
void seive( ll n ){
    vector<bool> is_prime(n+1, true);

    for(int i = 2;i<= n;i++){
        if(is_prime[i]){
            prime.push_back(i);
            for(int j = i*i;j<= n;j+=i){
                is_prime[j] = false;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n; cin >> n;
    seive(n);

    vector<int> freq(n+1);
    for(auto p : prime ){
        for(int i = p;i<=n;i+=p){
            freq[i]++;
        }
    }


    ll cnt = 0;
    for(auto c : freq){
        if(c == 2){
            cnt++;
        }
    }
    cout << cnt ;
    
    return 0;
}