#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;cin >> n;
        long long ans = 0 ;
        map<char,int> surur,sesh;
        map<string,int> total;
        while(n--){

            string s;cin >> s;
            char surur_char = s[0];
            char seser_char = s[1];
            int currentPair = surur[surur_char] + sesh[seser_char];
            int extra = 2*total[s];
            ans += currentPair - extra;
            surur[surur_char]++;
            sesh[seser_char]++;
            total[s]++;

        }
        cout << ans << endl ;
    }
    return 0;
}