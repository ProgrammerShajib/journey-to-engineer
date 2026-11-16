#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    string n;cin>>n;
    int L = n.length();
    int total = 0;

    for(int i= 1;i<L;i++){
        total+= (1LL<<i);
    }

    ll local = 0;

    for(int i = 0;i< L ;i++){
        local = local * 2;

        if(n[i] == '7'){
            local++;
        }
    }

    total += local+1;
    cout << total;


    return 0;
}