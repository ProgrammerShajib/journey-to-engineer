#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    for(int i = n; i>=1; i--){
        for(int x = i; x>=1; x--){
            printf("%d ", x);
        }
        printf("\n");
    }
    return 0;
}