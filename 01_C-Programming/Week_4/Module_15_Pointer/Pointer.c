#include <stdio.h>
int main(){

    int x;
    scanf("%d", &x);
    printf("x => %d\n", x);
    printf("Address of X before pointer => %p\n", &x);
    int* ptr;
    ptr = &x;
    printf("Address of X before pointer => %p\n", &x);
    printf("Address of x => %p\n", ptr);
    printf("Value that store in ptr => %d\n", *ptr);

    // Change the value of x using pointer
    *ptr = 200;
    printf("x => %d", x);
    
    return 0;
}