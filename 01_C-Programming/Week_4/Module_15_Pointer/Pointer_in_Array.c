#include <stdio.h>
int main()
{

    int a[5] = {1, 2, 3, 4, 5};
    // printf("%p\n", &a[0]);
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);

    *(a + 1) = 100; // Here adding 1 = add 4 bytes with address to go to the next variable
    // printf("%d", a[0]);
    for (int i = 0; i < 5; i++)
    {
        printf("%d =  %d\n", &a[i], a[i]);
    }
    return 0;
}