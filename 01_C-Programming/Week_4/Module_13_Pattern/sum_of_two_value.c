#include <stdio.h>
int main()
{

    int n, val, flag=0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d", &val);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // printf("%d %d\n", ar[i], ar[j]);
            int sum = ar[i] + ar[j];
            if (sum == val)
            {
                printf("%d + %d = %d\n", ar[i], ar[j], sum);
                flag = 1;
            }
        }
        // printf("%d ",ar[i]);
    }

    if(flag == 0){
        printf("Not match.");
    }

    return 0;
}