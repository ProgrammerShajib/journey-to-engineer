#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n,sum ;
        cin>> n >>sum;

        if(n>sum){
            cout <<"No\n";
            continue;
        }

        vector<int> a(n, 1);
        
        if(n%2 == 1){
            int extra = sum - n;
            a.back() = a.back() + extra;
        }else{

            if(sum%2 == 0){
                int extra = sum - n;
                a[0] += extra/2;
                a[1] += extra/2;
            }else{
                cout <<"No\n";
                continue;
            }
        }

        cout << "Yes\n";
        for(auto c : a) cout << c <<" " ;cout <<endl;

    }
    return 0;
}