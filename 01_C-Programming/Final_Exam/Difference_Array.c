#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int k = 0; k < n; k++)
    {
        int a;
        scanf("%d", &a);
        int A[a], B[a];
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &A[j]);
        }
        for (int j = 0; j < a; j++)
        {
            B[j] = A[j];
        }

        for (int i = 0; i < a - 1; i++)
        {
            for (int j = i + 1; j < a; j++)
            {
                if (B[i] > B[j])
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        int C[a];
        for (int i = 0; i < a; i++)
        {
            C[i] = abs(A[i] - B[i]);
        }

        for (int j = 0; j < a; j++)
        {
            printf("%d ", C[j]);
        }

        printf("\n");
    }
    return 0;
}