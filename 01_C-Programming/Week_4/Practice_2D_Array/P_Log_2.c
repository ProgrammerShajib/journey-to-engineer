#include <stdio.h>
long long int log2_floor(long long int n)
{
    if (n == 1)
    {
        return 0;
    }

     
    return 1 + log2_floor(n / 2);
}
int main()
{

    long long int n;
    scanf("%lld", &n);
 
    printf("%lld", log2_floor(n));

    return 0;
}