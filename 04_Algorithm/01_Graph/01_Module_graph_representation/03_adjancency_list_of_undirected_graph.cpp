#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, e;
    cin >> n >> e;
    vector<int> adjacent_list[n];
    while(e--){
        int a,b;
        cin >> a >> b;
        adjacent_list[a].push_back(b);
        adjacent_list[b].push_back(a); // just remove this line for directed list

    }
    for(int i = 0;i<n;i++){
        cout << i << "-> ";
        for(int x : adjacent_list[i]){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}