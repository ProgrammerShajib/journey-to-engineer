#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int a,b;cin>> a >> b;
    pbds<int> p;
    for(int i = 0;i<a;i++){
        int c;cin>> c ;
        p.insert(c);
    }
    // for(auto c : p) cout << c <<" ";
    cout << endl;
    for(int i = 0;i<b;i++){
        int d;cin>> d;
        cout << p.order_of_key(d+1) <<" ";
    }
    return 0;
}