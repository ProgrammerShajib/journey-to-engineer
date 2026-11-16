#include<bits/stdc++.h>
using namespace std;
bool check_kth_bit_on_or_off(int n, int k){
    return( 1 & (n >> k));
}

void print_ON_and_OFF_bit(int n){

    for(int k = 31;k>=0;k--){
        if(check_kth_bit_on_or_off(n,k) ){
            cout << 1 << " ";
        }else{
            cout << 0 <<" ";
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    // cout << check_kth_bit_on_or_off(45,2);
    // print_ON_and_OFF_bit(45);
    // cout << endl;
    // cout << __builtin_popcount(45);
    // which bit is large
    cout << __lg(45);
    return 0;
}