#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;

        int lena = a.length();
        int lenb = b.length();

        if(lena != lenb){
            cout << "NO\n";
        }else{
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());

            if(a == b){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}