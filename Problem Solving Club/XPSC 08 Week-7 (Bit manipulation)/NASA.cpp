#include<bits/stdc++.h>
using namespace std;

const int maxN = (1LL << 15);
bool checkPalindrom(int x){
    string s = to_string(x), t;
    t = s;
    reverse(t.begin(), t.end());
    return t == s;
}

vector<int>allPalindrom;
void markPalindrom(){
    for(int i = 0;i<maxN;i++){
        if(checkPalindrom(i)){
            allPalindrom.push_back(i);
        }
   
    }
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    markPalindrom();  
    
    int t;cin>> t;
    while(t--){
        
        int n;cin>>n;
        vector<int>a(n) , cnt(maxN+1,0);
        
        for(int i = 0;i<n;i++){
            cin >> a[i];
            cnt[a[i]]++;    
        }

        long long ans = n;
        for(int i = 0;i<n;i++){
            for(int j = 0;j < allPalindrom.size();j++){
                int curr = (a[i] ^ allPalindrom[j]);
                ans += cnt[curr];
            }
        }

        cout << ans/2 << "\n";
        
    }
    return 0;
}