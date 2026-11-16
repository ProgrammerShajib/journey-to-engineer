#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    cout << "Total sub segment will be 2^n-1 -1\n";
    for(int l = 0;l < n;l++){
        int sum = 0;
        for(int r = l ;r<n;r++){
            sum += a[r];
            cout << sum <<endl;
        }
    }
    return 0;
}