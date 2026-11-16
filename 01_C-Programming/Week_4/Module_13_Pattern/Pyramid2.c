#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int star = 1, space =n-1;
    for(int i = 0; i<n; i++){  // for printing new line

        for(int s = space; s>0; s--){
            printf(" ");
        }
        for(int j = 1; j<= star; j++){
            printf("%d ", j);
        }
        space--;
        star++;
        printf("\n");
    }
}