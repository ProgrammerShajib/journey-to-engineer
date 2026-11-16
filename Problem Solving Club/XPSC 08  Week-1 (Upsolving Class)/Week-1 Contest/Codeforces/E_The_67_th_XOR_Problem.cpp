#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    vector<int> v;
    // queue<int> q;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        while(n--){
            int a;
            cin >> a;
            sum = ( sum ^ a);
            
 
        }

        cout << sum << endl ;
    

        
    } 
    
    return 0;
}