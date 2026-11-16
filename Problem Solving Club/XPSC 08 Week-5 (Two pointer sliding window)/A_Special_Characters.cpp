#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 == 1){
            cout << "NO\n";
        }else{
            cout <<"YES\n";
            bool flag = 1;
            for(int i = 0;i<n;i+=2){
                if(flag){
                    cout << "AA";
                    flag = 0;
                }else{
                    cout << "BB";
                    flag = 1;
                }
            }

            cout << "\n";
        }
    }
    return 0;
}