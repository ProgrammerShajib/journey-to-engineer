#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>> n;
        vector<int> a(n);
        int cnt0=0, cnt1=0;
        for(int i = 0;i<n;i++){
            int b;
            cin>> b;
            if(b==1){
                cnt1++;
            }else{
                cnt0++;
            }
        }

        if(cnt0>cnt1){
            cout << "Elsie\n";
        }else{
            
            cout << "Bessie\n";
        }
    }
    return 0;
}