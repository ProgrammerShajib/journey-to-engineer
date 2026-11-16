#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    long long x;  
    cin >> n >> x;
    
    vector<pair<int, int>> ar;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        ar.push_back({a, i + 1});
    }

    sort(ar.begin(), ar.end());

    for(int i = 0; i < n - 2; i++){
        int l = i + 1;
        int r = n - 1;
        while(l < r){
            long long sum = (long long)ar[i].first + ar[l].first + ar[r].first;
            
            if(sum == x){
                cout << ar[i].second << " " << ar[l].second << " " << ar[r].second;
                return 0;
            } else if(sum < x){
                l++;
            } else {
                r--;
            }
        }
    }

 
    cout << "IMPOSSIBLE";
    return 0;
}