#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >>b ;

        int big_screen = ceil((double)b/2);
    
        int r_sm_sq = (15* big_screen) - (b*4);
        int sm_sc = 0;
        if(a <= r_sm_sq){
            cout << big_screen << endl;
        }else{
            int n_sq = a - r_sm_sq;
            sm_sc = (n_sq + 14)/15;
            cout << big_screen + sm_sc << endl;
        }
    }
    return 0;
}