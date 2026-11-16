#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin>>n;
        string s;cin>> s;
        string s2 = "map" , s3 = "pie";
        int   cnt = 0;
         

            for(int i = 0;i<n;){

                if(i+4 < n && s.substr(i,5) == "mapie"){
                    cnt++;
                    i+= 5;
                }else if( i+2 < n && s.substr(i, 3) == "pie" || s.substr(i,3) == "map"){
                    cnt++;
                    i+= 3;
                }else{
                    i++;
                }

            }

            cout << cnt << endl;
        
    }
    return 0;
}