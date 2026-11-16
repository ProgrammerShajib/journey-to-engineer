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
        multiset<int> ml;
        for(int i = 1; i <= n; i++){
            ml.insert(i);
        }

        vector<pair<int,int>> v;
        for(int i = 0; i < n-1; i++){
            auto it = ml.end();
            it--;  
        
            int a = *it;
            ml.erase(it);

            it = ml.end();  
            it--;
            int b = *it;
            ml.erase(it);

            ml.insert((a+b+1)/2);
            v.push_back({a,b});
        }

         
        cout << *ml.rbegin() << endl;
        for(auto [a,b] : v){
            cout << a << " " << b << "\n";
        }
    }
    return 0;
}