#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> oddNum;
        vector<int> evenNum;

        for(int i = 0;i<n;i++){
            int a;cin>>a;
            if(a%2 == 0){
                evenNum.push_back(a);
            }else{
                oddNum.push_back(a);
            }
        }
        
        int oddcnt = oddNum.size();
        int evencnt = evenNum.size();

        if(oddcnt == 0){
            cout << 0 << endl;
        }else{
            cout << (oddcnt-1)/2 + evencnt+1 << endl;
        }
   
    }
    return 0;
}
 