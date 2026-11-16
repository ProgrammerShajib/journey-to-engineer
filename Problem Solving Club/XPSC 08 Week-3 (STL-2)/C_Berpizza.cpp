#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin >> n;
    set<pair<int,int>> st;
    multiset<pair<int,int>> ml;
    int cnt = 1;
    for(int i = 1;i<= n;i++){
        int type;
        cin >> type;
        if(type == 1){
            int money ;
            cin >> money;
            st.insert({cnt, money});
            ml.insert({money , -cnt});
            cnt ++ ;
        }else{
            if(type == 2){
                int pos = st.begin()-> first, money = st.begin()->second;
                cout << pos << " ";
                st.erase(st.begin());
                ml.erase({money, -pos});
            }else{
                int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
                cout << pos << " ";
                ml.erase(--ml.end());
                ml.erase({money, -pos});
                st.erase({pos, money});
            }
        }
    }

 
    return 0;
}