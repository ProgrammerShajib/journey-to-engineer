#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> a(n+1);
        for(int i = 1;i<n+1;i++){
            cin >> a[i];
        }

        int j = a[1];
        bool ok = false;
        for(int i = 2;i<n+1;i++){
            if(j != a[i]){
                ok = true;
            }
        }

        if(ok){
            cout << "YES\n";

            int d = -1;
            for(int i = 2;i<n+1;i++){
                if(a[1] != a[i]){
                    cout << 1 << " " << i  << "\n";
                    d = i;
                }
            }

            for(int i = 2;i<n+1;i++){
                if(a[1] == a[i]){
                    cout << d << " " << i  << "\n";
                }
            }
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}