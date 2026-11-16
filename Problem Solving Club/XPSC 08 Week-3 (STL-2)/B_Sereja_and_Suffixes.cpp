#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n,m;
    cin >> n >>m ;
    vector<int> a(n+1), cnt(n+1);
    for(int i = 1;i<=n;i++){
        int d ;
        cin >> d;
        a[i] = d;
    }
    set<int> s;
    for(int i = n;i>0;i--){
        s.insert(a[i]);
        cnt[i] = s.size();
    }

    while(m--){
        int id;
        cin >> id;

        cout << cnt[id] <<"\n";
    }
    return 0;
}