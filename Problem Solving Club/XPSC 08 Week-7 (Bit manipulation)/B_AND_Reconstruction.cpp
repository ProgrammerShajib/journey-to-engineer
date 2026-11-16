#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n;cin>> n;
        vector<int> b(n-1);
        for(auto &i : b) cin >> i;
        
        vector<int > a;
        a.push_back(b[0]);
        for(int i = 0;i<n-1;i++){
            // cout << a.back() << " ";
            a.back() = a.back() | b[i];
            a.push_back(a.back() & b[i]);
        }

        int flag = 0;
        for(int i = 0;i<n-1;i++){
            if(b[i] != (a[i] & a[i+1])){
                flag =1;
            }
        }

        if(flag == 1){
            cout << -1 <<endl;
            continue;
        }
        for(auto c : a) cout << c <<" ";
        cout << endl;
    }
    return 0;
}