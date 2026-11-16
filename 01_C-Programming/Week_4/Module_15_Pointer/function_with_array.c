#include <stdio.h>

void fun(int *a)
{

    // *(a + 1) = 10;
    // a[4] = 30;

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

 
}
int main()
{

    int a[5] = {1,2,3,4};
    int *p ;
    printf("%p\n", p);
    p = a+3;
    printf("%p\n", p);
    *p = 5;
    // printf("%d",a[3]);
    // fun(a);
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}