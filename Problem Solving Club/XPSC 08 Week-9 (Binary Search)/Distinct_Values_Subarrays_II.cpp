#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n, k;
    cin >> n >>k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    map<int,int> freq;
    int l = 0, r=0;
    long long sub_arrays = 0;
    while(r < n){
        freq[a[r]]++;

        while(freq.size() >k){
            freq[a[l]]--;
            if(freq[a[l]] == 0){
                freq.erase(a[l]);
            }
            l++;
        }

        sub_arrays += r - l +1;
        r++;
    }

    cout << sub_arrays;
    return 0;
}