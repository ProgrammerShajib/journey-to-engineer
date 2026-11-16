#include <stdio.h>
#include<stdlib.h>
int main()
{

    int r, c;
    scanf("%d", &r);
    c = r;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }

    if (r == c)
    {
        // It's a square matrix
        // printf("This is a Matrix.\n");
        int sum_secondary_diagonal = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j == r - 1)
                { // checking is it a secondary diagonal matrix or not

                    sum_secondary_diagonal += a[i][j];
                }
            }
        }
        int sum_Primary_diagonal = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                { // checking is it a secondary diagonal matrix or not
                    sum_Primary_diagonal += a[i][j];
                }
            }
        }
        // printf("Sum of Primary Diagonal = %d \n", sum_Primary_diagonal);
        // printf("Sum of Secondary Diagonal = %d ", sum_secondary_diagonal);

        int total = abs(sum_Primary_diagonal - sum_secondary_diagonal);
        printf("%d", total);
    }
    else
    {
        printf("This is not a diagonal Matrix.");
    }
    return 0;
}