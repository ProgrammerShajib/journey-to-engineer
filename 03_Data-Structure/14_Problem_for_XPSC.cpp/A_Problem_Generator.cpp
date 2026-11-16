#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int p , r;
        cin >> p >> r;
        string s;
        cin >> s;
        int fre[7] = {0};
        for(char c : s){
            fre[c-'A']++;
        }


        int cnt = 0;
        for(int i = 0;i<7 ;i++){
          
            if(fre[i] < r){

                cnt += r - fre[i];
            }
        }
        cout << cnt << endl;
    }
    return 0;
}