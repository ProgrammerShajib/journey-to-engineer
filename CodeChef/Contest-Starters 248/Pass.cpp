#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        vector<int> marks(5);
        for(auto &i: marks) cin >> i;
        int cnt60 = 0;
        int cnt30 = 0;

        for(auto c: marks){
            if(c>= 60){
                cnt60++;
            }
            if(c>= 30){
                cnt30++;
            }
             
        }

        // cout << cnt60 << " " << cnt30 << endl;
        if(cnt60 >= 2 && cnt30>= 4){
            cout << "Pass\n";
        }else{
            cout <<"Fail\n";
        }
    }
    return 0;
}