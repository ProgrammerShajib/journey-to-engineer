#include <stdio.h>

void fun(int* ptr)
{
    *ptr = 20;
    printf("X in fun function => %d\n", *ptr);
}


int main()
{

    int x = 10;
     
    fun(&x); // Pass the address of x in fun function it's called Dereference
    printf("X in main function = %d\n", x);
    // printf("X in main function = %d\n", *ptr);
    return 0;
}