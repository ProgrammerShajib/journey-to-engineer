#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){

        int r,g,b;
        cin >> r >> g >> b;
        if(r!= 0 && g!= 0 && b != 0){

            int a = min(r,g);
            int f = min(a,b);
        

            if(f == r){
                cout << r*10 + (g-r)*3 + (b-r) *3 << "\n";
            }else if(f== g){
                cout << g*10 + (r-g)*3 + (b-g)*3 << "\n";                
            }else if(f == b){
                cout << b*10 + (r-b)*3 + (g-b)*3 << "\n";
            }
           
        }else{
            cout << r*3 + g*3 + b*3<<"\n";
        }
    }
    return 0;
}