#include <stdio.h>
int main(){

    int r, c;
    scanf("%d %d", &r,&c);
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j =0; j< c; j++){
            scanf("%d",&a[i][j] );
        }
    }
    // for(int i=0; i<r; i++){
    //     for(int j =0; j< c; j++){
    //         printf("%d ",a[i][j] );
    //     }
    //     printf("\n");
    // }

    int row_index;
    scanf("%d", &row_index);
    row_index = row_index-1;
    for(int i=0; i<c;i++){
        printf("%d ", a[row_index][i]);
    }
    return 0;
}