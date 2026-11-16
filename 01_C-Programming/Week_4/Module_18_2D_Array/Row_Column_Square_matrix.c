#include <stdio.h>
int main()
{

    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Checking if it is a row matrix or not
    if (r == 1)
    {
        printf("This is a row matrix.");
    }
    // Checking if it is a Column matrix or not
    else if (c == 1)
    {
        printf("This is a column matrix.");
    }
    // Checking if it is a Square matrix or not
    else if (r == c)
    {
        printf("This is a square matrix.");
    }
    printf("\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}