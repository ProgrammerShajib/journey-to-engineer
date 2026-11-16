#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int l, q;
        cin>> l >> q;
        string s;cin>> s;
        int mx = 1;
        int last = 0;

        int len = 1;
        for(int i = 1;i<l;i++){

            if(s[i] == s[i-1]){
                len++;
                mx = max(mx, len);
            }else{
                len = 1;
            }
        }

        cout << mx <<" ";
        

        int j = l-1;
        // cout << s[j] << endl;
        for(int i = 0;i<q;i++){
            string a;cin>>a;

            
            if(s[j] == a[0]){
                len++;
                j++;
                // cout << j << " ";
                s.append(a);
                mx = max(mx, len);
                cout << mx << " ";
                // cout << s << endl;
            }else{
                len = 1;
                s.append(a);
                j++;
                mx = max(mx, len);
                cout << mx <<  " ";
                // cout << s << endl;

            }
            
        }

        cout << endl;
    }
    return 0;
}