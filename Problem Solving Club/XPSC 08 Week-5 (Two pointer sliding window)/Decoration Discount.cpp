#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;cin>>n;
        vector<int> v;
        for(int i = 0;i<n;i++){
            int a;
            cin>> a;
            v.push_back(a);
        }
        vector<int> ans;
        for(int i = 0;i<n-1;i++){
            int d = v[i+1]/2;
            ans.push_back(d+v[i]);
        }

        sort(ans.begin(),ans.end());
        sort(v.begin(),v.end());
       
        int sum = v[0]+v[1];
        cout << min(sum,ans[0]) << endl;

    }
    return 0;
}