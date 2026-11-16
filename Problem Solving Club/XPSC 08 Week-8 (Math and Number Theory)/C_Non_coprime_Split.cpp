#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t ;
    while(t--){
        int l,r;cin>> l >> r;

        bool flag = 0;
        for( int n = l; n <= r ; ++n){

            for(int i = 2;i*i <=n ;++i){

                if(n%i == 0){
                    cout << i << ' ' << n - i << "\n";
                    flag = 1;
                    break;
                }
            }

            if(flag){
                break;
            }
        }

        if(flag == 0){
            cout << - 1 << endl;
        }

    }
    return 0;
}