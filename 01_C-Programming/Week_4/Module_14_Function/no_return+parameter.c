#include <stdio.h>


void sum(int a, int b) // newly created function
{
    int total = a + b; // 10 + 20 = 30 = total
    printf("%d", total);
    return ;
}

int main() // Main function
{

    sum(10, 20); // We are calling the sum function
     
    return 0;
}