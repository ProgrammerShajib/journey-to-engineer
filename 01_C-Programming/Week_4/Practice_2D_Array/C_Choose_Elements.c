#include <stdio.h>
int main()
{

    int n, k;
    if (scanf("%d%d", &n, &k) != 2)
        return 0;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            if (a[j] < a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        // printf("%d ", a[i]);
        if(a[i]>0){

            sum = sum + a[i];
        }
    }

    printf("%lld", sum);

    return 0;
}