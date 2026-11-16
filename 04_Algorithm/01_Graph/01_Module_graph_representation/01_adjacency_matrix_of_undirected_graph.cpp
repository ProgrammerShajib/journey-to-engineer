#include<bits/stdc++.h>
using namespace std;
int main(){

    int r,c;
    cin >> r >> c;
    int adj_matrix [r][c];

    // Set all adjacent matrix to 0;
    memset(adj_matrix, 0, sizeof(adj_matrix));

    // for(int i =0;i<r;i++){
    //     for(int j =0;j<c;j++){
    //         if(i==j){
    //             adj_matrix[i][j] = 1;
    //         }
    //     }
    // }
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            
            int a, b;
            cin >>a >> b;
            adj_matrix[a][b] = 1;
            adj_matrix[b][a] = 1;
        }
 
    }

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}