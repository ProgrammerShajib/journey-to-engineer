#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int d = n;
        vector<int > v;
        while(n--){
            int a ;
            cin >> a;
            v.push_back(a);
        }

        sort(v.begin(),v.end(), greater<int>());

        int cnt =0;
        int sum = 0;
        for(auto c : v){

            sum += c;
            if(sum >= 0){
                cnt++;
            }else {
                break;
            }
        }



        cout << cnt << endl;
    }
    return 0;
}