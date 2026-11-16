#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--){
        int n, x;cin >> n >> x;
        vector<int> v;
        vector<int> good2;
        vector<int> bad3;
        int sum = 0;
        int sum2 = 0;
        for(int i = 0;i<n;i++){
            int c ;cin >> c;
            sum += c;
            sum2 += c;
            if(sum2 == x){
                bad3.push_back(c);
                sum2 -= c;
            }else{
                good2.push_back(c);
            }
            v.push_back(c);

        }
        if(x == sum){
            cout <<"NO\n";
        }else{
            cout <<"YES\n";
            for(auto c : good2) cout << c <<" ";
            for(auto c : bad3) cout << c <<" ";
            cout << endl;
        }


    }
    return 0;
}