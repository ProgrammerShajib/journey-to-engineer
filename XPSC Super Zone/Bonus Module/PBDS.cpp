#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    pbds <int> p;
    while (n--){
        int a;cin>> a;
        p.insert(a);

    }
    
    // cout << p.size();
    for(auto c : p)cout << c <<" ";
    cout << endl;
    cout << *p.find_by_order(1);
    cout << endl;

    cout << p.order_of_key(40);
    return 0;
}