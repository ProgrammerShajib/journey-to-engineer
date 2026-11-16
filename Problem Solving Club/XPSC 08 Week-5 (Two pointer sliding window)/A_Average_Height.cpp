#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        vector<int>odd;
        vector<int>even;
        for(int i = 0;i<n;i++){
            int a;cin >> a;
            if(a%2 == 0){
                even.push_back(a);
            }else{
                odd.push_back(a);
            }
        }

        for(auto c : odd){
            cout << c <<" " ; 
        }
        for(auto c : even){
            cout << c <<" ";

        }
        cout << endl;

    }
    return 0;
}