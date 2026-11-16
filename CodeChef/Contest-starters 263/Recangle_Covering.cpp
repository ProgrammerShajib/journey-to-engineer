#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin>> n >>m;

        int minR = n, maxR = -1, minC = m , maxC = -1;
        for(int i = 0;i<n;i++){
            string s;
            cin>> s;
            for(int j = 0;j<m;j++){
                if(s[j] == '1'){
                    minR = min(minR, i);
                    maxR = max(maxR, i);
                    minC = min(minC, j);
                    maxC = max(maxC, j);
                }
            }

        }
        cout << (maxR - minR +1) * (maxC - minC +1) <<"\n";

    }
    return 0;
}