#include <stdio.h>

int sum(int a[], int n)
{

    if (n == 0)
    {

        return a[n];
    }
    int last = sum(a, n - 1);

    return last + a[n];
}
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int val = sum(a, n - 1);
    printf("%d", val);
    return 0;
}