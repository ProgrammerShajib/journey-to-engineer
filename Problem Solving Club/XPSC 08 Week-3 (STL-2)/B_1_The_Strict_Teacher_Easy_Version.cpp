#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, m, q;
        cin >> n >> m >> q;
        int p, p2;cin >> p >> p2;

        int b ;cin >> b;

        int t, t2;
        if(p>p2){
            t = p2;
            t2 = p;
        }else{
            t = p;
            t2 = p2;
        }
        if(b <t){
            cout << t -1 << endl;
        }else if(b > t2){
            cout << n - t2 << endl;
        }else if(b > t && b < t2){
            cout << (t2 - t)/2 << endl;
        }else if( b == t && b == t2){
            cout << 0 << endl;
        }
    }
    return 0;
}