#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n, x;
    cin >> n >> x;
    
    
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i + 1;  
    }
 
    sort(v.begin(), v.end());
    
    int left = 0, right = n - 1;
    while(left < right){
        int current_sum = v[left].first + v[right].first;
        
        if(current_sum == x){
            cout << v[right].second << " " << v[left].second << endl;
            return 0;  
        }
        else if(current_sum < x){
            left++;  
        }
        else {
            right--; 
        }
    }
    
    cout << "IMPOSSIBLE" << endl;
    return 0;
}