#include<bits/stdc++.h>
using namespace std;
int main(){

    int n , e;
    cin >> n >> e;
    int adj_mat[n+1][n+1];

    for(int i =0;i<=n;i++){
        for(int j = 0;j<=n;j++){
            if(i == j){
                adj_mat[i][j] = 0;
            }else{
                adj_mat[i][j] = INT_MAX;
            }
        }
    }

    while(e--){
        int a, b, c;
        cin >> a >> b >> c;
        adj_mat[a][b] = c;
        // adj_mat[b][a] = c; // use this for undirected graph
    }

    for(int k=1;k<=n;k++){
        for(int i =1;i<=n;i++){
            for(int j =1;j<=n;j++){
                if(adj_mat[i][k] != INT_MAX && adj_mat[k][j] != INT_MAX && adj_mat[i][k] +adj_mat[k][j] < adj_mat[i][j]){
                    adj_mat[i][j] = adj_mat[i][k] +adj_mat[k][j];

                }
            }
        }
    }

    // Negetive Cycle detection in Floyd Warshal Algorithm
    bool cycle = false;
    for(int i =0;i<=n;i++){
        if(adj_mat[i][i] < 0){
            cycle = true;
        }
    }

    if(cycle){
        cout << "Negetive Cycle detected!";
    }else{

        int q;
        cin >> q;
        while(q--){
            int a, b;
            cin >> a>> b;
            cout << adj_mat[a][b] <<"\n";
        }
        // for(int i =0;i<=n;i++){
        //     for(int j = 0;j<=n;j++){
        //         if(adj_mat[i][j] == INT_MAX){
        //             cout << "INT" <<" ";
        //         }else{
        //             cout << adj_mat[i][j] <<" ";
        //         }
        //     }
        //     cout << "\n";
        // }
    }

    cout << adj_mat[1][7];
    return 0;
}