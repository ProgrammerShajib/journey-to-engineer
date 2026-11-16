#include <stdio.h>
void recursion(int n, int i){
    if(n==0){
        return;
    }
    printf("%d\n", i);
    n--;
    i++;
    recursion(n, i);
}
int main(){

    int n, i =1;
    scanf("%d", &n);
    recursion(n, i);

    return 0;
}