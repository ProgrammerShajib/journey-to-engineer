#include <stdio.h>
int main()
{
    int t = 0, hi = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {

        int n;
        scanf("%d", &n);
        int arr[n];

        for (int a = 0; a < n; a++)
        {
            scanf("%d", &arr[a]);
        }

        int sum = arr[0] + arr[1] + 1 - 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                int newsum = arr[i] + arr[j] + j - i;
                if (sum > newsum)
                {
                    sum = newsum;
                }
            }
        }

        printf("%d \n", sum);
    }

    return 0;
}