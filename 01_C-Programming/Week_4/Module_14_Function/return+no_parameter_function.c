#include <stdio.h>

int sum()
{

    int a, b;
    scanf("%d%d", &a, &b);
    int total = a + b;
    return total;
}
int main()
{
    
    int val = sum();
    printf("sum = %d", val);
    return 0;
}