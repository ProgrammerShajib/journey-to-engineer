#include<bits/stdc++.h>
using namespace std;
int main(){

    int T;
    cin >> T;
    while(T--){
        string S,X;
        cin >> S >> X;

        string result ="";
        int a, b;
        a = S.length();
        b = X.length();
        for(int i =0;i<a;){

            bool match = true;
            if(i+b <= a){
                for(int j=0;j<b;j++){
                    if(S[i+j] != X[j]){
                        match = false;
                        break;
                    }
                }
            }else{
                match = false;
            } 

            if(match){
                result += "#";
                i+=b;
            }else{
                result += S[i];
                i++;
            }
        }
        cout << result << endl;
    }
    return 0;
}