#include<bits/stdc++.h>
using namespace std;

int diff(char a, char b){

    int d = abs(a-b);
    return min(d, 10 - d);
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n,m;
        cin>> n >> m;
        string s , k ; cin >> s >>k;

        int max = 1e9;
        for(int i = 0 ;i<= n-m;i++){

            int moves = 0;
            for(int j = 0;j < m ;j++){

                moves += diff(s[i+j] , k[j]);
            }

            max = min(max, moves);
        }

        cout << max << endl;
    }
    return 0;
}