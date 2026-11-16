#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;cin>>n;
    cout << (1<<n) << endl;
 
    for(int mask = 0;mask<(1<<n);mask++){

        cout << mask <<" => " ;
        for(int k = n-1;k >=0;k--){
            if((mask >> k) & 1){
                cout << 1 <<" ";
            }else{
                cout << 0 << " ";
            }
        }
        cout << "\n";
    }
 
    return 0;
}
