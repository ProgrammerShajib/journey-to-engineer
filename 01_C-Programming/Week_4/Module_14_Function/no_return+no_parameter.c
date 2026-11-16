#include <stdio.h>


void sum() // newly created function
{
    int a, b;
    scanf("%d%d", &a, &b);
    int total = a + b; // 10 + 20 = 30 = total
    printf("%d", total);
    return ;
}

int main() // Main function
{

    sum(); // We are calling the sum function
     
    return 0;
}