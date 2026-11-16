#include <stdio.h>
int main(){

    int r,c, n;
    scanf("%d%d", &r, &c);
    int a[r][c];
    for(int i = 0; i< r; i++){
        for(int j = 0; j< c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &n);


    int  exist = 0;

    for(int i = 0; i< r; i++){
        for(int j = 0; j< c; j++){
            if(a[i][j] == n ){
                exist++;
            } 
        }
         
    }

    if(exist >=1){
        printf("will not take number");
    }else{
        printf("will take number");
    }
    return 0;
}