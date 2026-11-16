#include <stdio.h>

void fun(int x ){
    x = 20;
    printf("X in fun function => %d\n", x);
}
int main(){

    int x = 10;
    fun(x);
    printf("X in main function = %d\n", x);
    return 0;
}