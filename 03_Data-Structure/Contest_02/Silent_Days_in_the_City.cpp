#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> s(n, 0);
    for(int i = 1; i < n - 1; i++){
        if(v[i] < v[i-1] && v[i] < v[i+1]){
            s[i] = 1;
        }
    }

    vector<int> p_sum(n + 1, 0);
    for(int i = 0; i < n; i++){
        p_sum[i+1] = p_sum[i] + s[i];
    }

    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        if(r - l < 2){
            cout << 0 << "\n";
        } else {
            cout << p_sum[r-1] - p_sum[l] << "\n";
        }
    }
    return 0;
}