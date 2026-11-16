#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n , k;cin >> n >> k;
    vector<int> v(n);
    for(auto &i : v) cin >> i;
    // for(auto c : v) cout << c <<" ";
    map<int,int> mp;
    int sum = 0;

    // we are storing the prefix sum  with index in the map
    for(int i = 0;i<n;i++){
        sum +=v[i];
        mp[sum] = i;
    }

    int res = 0;
    int prefsum = 0;
    for(int i = 0;i<n;i++){
        prefsum += v[i];
        // We are cheking that our prefsum is equal or not to our target k
        if(prefsum == k){
            res = i + 1;
            
            // if we find the subtracktion in our map that means we have a subarray that satisfy our logic so we update our res if it is bigger than the result we had.
        }else if (mp.find(prefsum - k) != mp.end()){
            res = max(res, i - mp[prefsum-k]);
        }

        // if we don't find the "prefsum" in the map then we insert it with  index
        // if(mp.find(prefsum) == mp.end()){
        //     mp[prefsum] = i;
        // }
    }
    cout << res ;
    return 0;
}