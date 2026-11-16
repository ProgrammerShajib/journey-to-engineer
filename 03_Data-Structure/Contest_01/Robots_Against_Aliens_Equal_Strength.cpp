#include<bits/stdc++.h>
using namespace std;
int main(){

    int a, b;
    cin >> a >> b;
  
    int arr[a][b];
    long long rowsum[a];
    vector<int>zero(a);

    for(int i = 0;i<a;i++){
        long long  sum = 0;
        int zerofound = 0;
        for(int j = 0;j<b;j++){
            cin >> arr[i][j];
            sum += arr[i][j];
            if(arr[i][j] == 0 ){
                zerofound = 1;
            }  

            
        }
        rowsum[i] = sum;
        zero[i] = zerofound;
    }
    long long mainSum = 0; 
    int possible = 1;

    for(int i = 0; i < a; i++){
        if(  !zero[i]){
            if(mainSum == 0){
                mainSum = rowsum[i];
            } else  {
                if( rowsum[i] != mainSum){
                    possible = 0;
                    break;
                }
            } 
        }
    }

    if (possible == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}