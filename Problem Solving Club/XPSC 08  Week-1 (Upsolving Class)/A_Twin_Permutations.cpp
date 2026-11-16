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
        int b = n;
        while(b--){
            int a;
            cin >> a;
            cout << n+1 - a <<" ";
        }
        cout <<endl;

    }
    
    return 0;
}