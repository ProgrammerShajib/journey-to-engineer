#include <stdio.h>
void array(int a[], int n, int i){

    if(i<0){
        return;
    }
    if(i%2 == 0){
        printf( "%d ", a[i]);
    }
    i--;
    array(a, n, i);
}
int main(){

    int n;
    scanf("%d", &n);
    int a[n], i = n-1;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    array(a, n, i);
    return 0;
}