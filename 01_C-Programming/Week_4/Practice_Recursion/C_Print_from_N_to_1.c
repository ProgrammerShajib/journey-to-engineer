#include <stdio.h>
void recursion(int n){
    if(n==0){
        return;
    }else if(n == 1){
        printf("%d", 1);
        return;
    }

    printf("%d ", n);
    n--;
    
    recursion(n);
}
int main(){

    int n;
    scanf("%d", &n);
    recursion(n);

    return 0;
}