#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    // for(int i =0;i<n;i++){
    //     cout << v[i];
    // }
    int t;
    cin >> t;
//    cout <<  t;
    while(t--){
        int q;
        cin >> q;
        // cout << q << endl;
        int l = 0 , r = n -1;
        int found = false;
        while(l<= r){
            int mid = (l+r)/2;
            if(v[mid] == q){
                // cout << "YES" << endl;
                found = true;
                break;
            }else if(v[mid] > q){
                r = mid -1;
            }else{
                l = mid + 1;
            }
        }

        if(found){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}