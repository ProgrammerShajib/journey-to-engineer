#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;cin>> t;
    while(t--){
        int n;cin >>n;
        int total_elements = 2*n;

        vector<int>a(total_elements+1);
        vector<int> l(n+1, 0);
        vector<int> r(n+1, 0);

        for(int i= 1;i<= total_elements;i++){
            cin >> a[i];
            if(l[a[i]] == 0){
                l[a[i]] = i;
            }else{
                r[a[i]] = i;
            }
        }
        vector<ll > diary(total_elements+1, 0);

        for(int page = 1;page <= total_elements;page++){
            diary[page] = diary[page-1];

            int current_num = a[page];
            
            if(r[current_num] == page){
                ll len = r[current_num] - l[current_num] +1;
                ll extra_profit = len* len - len;
                ll profit_nibo = diary[l[current_num] -1]+ extra_profit;
                diary[page] = max(diary[page], profit_nibo);
            }
        }

        ll final_score = (2ll*n) + diary[total_elements];
        cout << final_score <<"\n";
    }
    return 0;
}