#include<bits/stdc++.h>
using namespace std;
int main(){

    int r ,c;
    cin >> r >> c;
    int adj_mat[r][c];
    memset(adj_mat, 0, sizeof(adj_mat));



    // every Node is connected with everyone so i initialize it before
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            if(i==j){
                adj_mat[i][j] = 1;
            }
        }
    }

    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            int a , b;
            cin >> a >> b;
            adj_mat[a][b] = 1;
            // for directed graph we only connect it in one way
            // adj_mat[b][a] = 1;

        }
    }
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            cout << adj_mat[i][j]<< " ";
        }
        cout << "\n";
    }
    return 0;
}