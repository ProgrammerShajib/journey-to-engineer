#include<bits/stdc++.h>
using namespace std;

const int mnx = 30 + 5;
vector<bool> prime(mnx, true);
vector<int> allPrime;
void seive(){
    for(int i = 2;i<mnx ;i++){
        if(prime[i]){
            for(int j = i+i;j<mnx ;j+=i){
                prime[j] = false;
            }
        }
    }
    for(int i = 2;i<mnx;i++){
        if(prime[i]){
            allPrime.push_back(i);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    seive();
    int t;
    cin>> t;

    int n = t;
    int idx = 0;
    map<int, int> cnt;
    while(t> 1){
        while(true){
            if(t%allPrime[idx] != 0){
                break;
            }

            t /= allPrime[idx];
            cnt[allPrime[idx]]++;
        }
        idx++;
    }

    cout << n <<"-> ";
    for(auto [x,y] : cnt){
        // cout << x << "--> " << y << endl;
        for(int i = 1;i<=y;i++){
            cout << x <<" x ";
        }
    }
    
    return 0;
}