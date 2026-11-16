#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>> t;
    while(t--){
        int n, w;
        cin >> n >>w;
        multiset<int> ml;
        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            ml.insert(a);
        }
        int h = 1;
        int s = w;
        while(!ml.empty()){
            auto it = ml.upper_bound(s);
            if(it != ml.begin()){
                it--;
                int val = *it;
                if(s < val){
                    h++;
                    s = w;
                }else{
                    s -=val;
                    ml.erase(it);
                }
            }else{
                h++;
                s = w;
            }
        }
        cout << h << endl;
    }
    return 0;
}