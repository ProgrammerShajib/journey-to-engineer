#include <stdio.h>
int main()
{

    int n, x;
    int even = 0, odd = 0, positive = 0, negative = 0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        // printf("%d ", x);
        if (x % 2 == 0)
        {
            even += 1;
            // printf("Even: %d\n", even);
            if (x > 0)
            {
                positive++;
            }
            else if (x < 0)
            {
                negative++;
                /* code */
            }
        }
        else
        {

            odd++;

            if (x > 0)
            {
                positive++;
            }
            else if (x < 0)
            {
                negative++;
                /* code */
            }
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}