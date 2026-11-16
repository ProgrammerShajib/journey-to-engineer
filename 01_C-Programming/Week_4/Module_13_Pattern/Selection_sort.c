#include <stdio.h>
int main()
{

    int n, val, flag = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = ar[i] + ar[j];
            if (ar[i] < ar[j])
            {
                // printf("%d + %d = %d\n", ar[i], ar[j], sum);
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
                // flag = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}