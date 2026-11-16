#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ar[n];
        int val;
        for(int i = 0;i<n;i++){
            cin >> val;
            ar[i] = val;
        }
        sort(ar, ar+n);
        // sort(ar, ar+n , greater<int>());

        int mn = ar[0];
        int max = ar[n-1];

        if(mn%2 == max%2) cout << 0 << endl;
        else{

            int i = 0, cnt1 = 0;
            while(ar[i]%2 != max%2){
                i++;
                cnt1++;
    
            }
            int j = n-1, cnt2 = 0;
            while(ar[j]%2 != mn%2){
                j--;
                cnt2++;
    
            }

            cout << min(cnt1, cnt2) << endl;
        }
    }
    return 0;
}