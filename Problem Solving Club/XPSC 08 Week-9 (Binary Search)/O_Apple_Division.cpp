#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;cin>> n;
    vector<int> a(n), pref(n,0);
    for(auto &i : a)cin >> i;
    sort(a.begin(), a.end());
    pref[0] = a[0];
    for(int i = 1;i<n;i++){
        pref[i] = pref[i-1] + a[i];
    }
    for(auto c : a) cout << c <<" ";
    cout <<endl;
    for(auto c : pref) cout << c <<" ";
    int sum = 0;

    for(auto c : a) sum += c;
    int mid = sum/2;
    auto big = lower_bound(a.begin(), a.end(), mid) - a.begin(); 

    
    cout << endl << sum/2 << " " << big; 
    return 0;
}