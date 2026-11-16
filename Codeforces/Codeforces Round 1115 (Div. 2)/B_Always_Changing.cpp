#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int total_0 = 0, total_1 = 0;
        int req_0 = 0 , req_1 = 0;
        for(int i = 0 ;i<n;i++){
            if(s[i] == '0'){
                total_0++;
            }else{
                total_1++;
            }
        }
        for(int i = 1 ;i<n;i++){
            if(s[i] ==s[i-1] && s[i] == '0'){
                req_0++;
            }else if(s[i] ==s[i-1] && s[i] == '1'){
                req_1++;
            }
        }
        int del_0 = req_0;
        int del_1 = req_1;

        if(req_0 > req_1){
            del_1 = req_0 - 1;
        }

        if(req_0 < req_1){
            del_0 = req_1 - 1;
        }

        if(total_1>= del_1 && total_0 >= del_0){
            cout << del_0 + del_1 <<endl;
        }else{
            cout << -1 <<endl;
        }
    }
    return 0;
}