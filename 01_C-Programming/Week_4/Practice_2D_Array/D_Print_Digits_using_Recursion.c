#include <stdio.h>

void recursion(int a){
 
    if(a == 0){
        return;
    }

    int last = a % 10;
    int val = a/10;
    recursion(val);
    printf("%d ", last);
}
int main(){

    int n;
    scanf("%d", &n);
  
    for(int i=0; i< n; i++){
        int a;
        scanf("%d", &a);
        if(a ==0){
            printf("%d ", a);
        }
        recursion(a);
        printf("\n");
    }
    return 0;
}