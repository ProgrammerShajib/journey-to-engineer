#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n , k , m;
    cin >> n >> m >> k ;
    vector<int> v(m+1);  
    for(int i= 0;i<m+1;i++){
        cin >> v[i];
    }

    int a = v[m];
    int friends = 0;
    for(int i = 0;i<m;i++){
        int d = a^v[i];
        
        int cnt =  __builtin_popcount(d);
        if(cnt <= k){
            friends++;
        }
    }

    cout << friends << "\n";
    return 0;
}
