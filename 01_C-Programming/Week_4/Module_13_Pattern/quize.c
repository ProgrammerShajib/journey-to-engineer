#include <stdio.h>
int main(){

    int s =0;
    for(int i = 1; i<=5; i+=2){
        for(int j = 1; j<=i; j++){
            printf("%d* ", s++);
        }
        printf("\n");
    }
    return 0;
}