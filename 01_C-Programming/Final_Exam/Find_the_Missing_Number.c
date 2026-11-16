#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long int a = 0, b = 0, c = 0, d = 0;
        scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
     
        long long mul = b * c * d;

        if (mul == 0)
        {
            if (a == 0)
            {
                printf("%d\n", 0);
            }
            else
            {
                printf("%d\n", -1);
            }
        }
        else
        {
            if (a % mul == 0)
            {
                printf("%lld\n", a / mul);
            }
            else
            {
                printf("%d\n", -1);
            }
        }

    }
    return 0;
}