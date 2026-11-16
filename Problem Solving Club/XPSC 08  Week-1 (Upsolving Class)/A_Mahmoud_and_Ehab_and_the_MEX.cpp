#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    map<int, bool> mp;
    while(n--){
        int a;
        cin >> a;
        mp[a] = true;
    }

    int cnt = 0;
    for(int i = 0;i<m;i++){
        if(mp.find(i) == mp.end()){
            cnt++;
        }
    }

    if(mp.find(m) !=  mp.end()){
        cnt++;
    }
    cout << cnt;
    return 0;
}