#include <stdio.h>
int main(){

    int r, c;
    scanf("%d%d", &r, &c);
    int a[r][c];
    if(r == c){
        for(int i =0;i<r;i++){
            for(int j =0;j<c;j++){
                scanf("%d", &a[i][j]);
            }
        }
        int jadu = 1;
        for(int i =0;i<r;i++){
            for(int j =0;j<c;j++){
                 if(i == j || i+j == r-1){
                     if(a[i][j] != 1 ){
                        jadu =0;
                        break;
                     } 
                 }else{
                    if(a[i][j] != 0){
                        jadu = 0;
                        break;
                    }
                 }
            }
           
        }

        if(jadu == 1){
            printf("YES");
        }else{
            printf("NO");
        }


    }else{
        printf("NO");
    }
    return 0;
}