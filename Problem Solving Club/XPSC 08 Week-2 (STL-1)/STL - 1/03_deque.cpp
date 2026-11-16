#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin >>n;
    deque<int> dq(n);
    for(int i = 0;i<n;i++){
        cin >> dq[i];
    }

    // for(auto i : dq){
    //     cout << i << " ";
    // }

    // dq.pop_front();
    // dq.pop_back();
    cout << dq.size();
    sort(dq.rbegin(), dq.rend());
    for(auto c : dq){
        cout << c << " ";
    }

    return 0;
}