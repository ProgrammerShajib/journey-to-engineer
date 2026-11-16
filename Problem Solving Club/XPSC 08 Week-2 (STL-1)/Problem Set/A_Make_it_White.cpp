#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    // Hello Shajib
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        queue<int> q;
        for(int i = 0;i<n;i++){
        
            if(s[i] == 'B'){
                q.push(i);
            }
        }
        int cnt = 0;
        for(int i = q.front() ; i <= q.back(); i++){
            cnt++;
        }

        cout << cnt <<endl;
    }
    return 0;
}