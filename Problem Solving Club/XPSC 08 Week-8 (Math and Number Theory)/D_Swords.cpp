#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;cin>> n;
    vector<long long> a(n);
    for(auto &i : a) cin >> i; 
    long long mx = 0;
    for(auto c : a) mx = max(c , mx);
    
    vector<long long > remove;
    for(auto i : a) remove.push_back(mx - i);

    long long gc = 0;
    for(auto i : remove) gc = __gcd(i, gc);

    long long chor =0;
    for(auto i : remove) chor += i/gc;
    cout << chor << " " << gc ;

    return 0;
}