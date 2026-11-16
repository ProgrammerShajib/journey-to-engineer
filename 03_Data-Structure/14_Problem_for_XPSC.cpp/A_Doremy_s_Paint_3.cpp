#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        map<int,int> mp;
        int ar[n];
        for(int i = 0;i<n;i++){
            cin >> ar[i];
            mp[ar[i]]++;
        }

        int siz = mp.size();

        cout << mp[1];
        if(siz > 2 ){
            cout << "No" <<endl;
        }else{
            if(siz == 2){
                vector<int> v;
                for(auto p: mp){
                    v.push_back(p.second);
                }
                if(abs(v[0] - v[1]) > 1){
                    cout << "No" << endl;
                }else{
                    cout << "Yes" << endl;
                }
            }else{
                cout << "Yes" <<endl;
            }
        }

    }
    return 0;
}