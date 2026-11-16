#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }
        for(int i = 0;i<n;i++){
            int l;
            string op;
            cin >> l >> op;
            for(auto c: op){
                if(c == 'U'){
                    int d =  (v[i]-1)%10;
                    if(d == -1){
                        v[i] = 9;
                    }else{
                        v[i] = d;
                    }
                }else if(c == 'D'){
                    v[i] = (v[i]+1)%10;

                }
            }
        }
        for(auto f : v){
            cout << f <<" ";
        }
        cout << endl;
        
    }
    return 0;
}